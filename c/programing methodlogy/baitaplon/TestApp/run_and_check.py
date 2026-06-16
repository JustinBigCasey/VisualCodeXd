#!/usr/bin/env python3
"""
run_and_check.py
- Compile nqt.c -> nqt.exe (if gcc available)
- For each line in tests.txt (format below) writes input.inp, runs program with argument input.inp,
  reads output.out and compares to expected.
- Prints ALL failing cases with details.
Format tests.txt lines:
n dc dg ld Weather expected_bc expected_bg expected_nd
"""
import os, subprocess, shutil, sys, math, time

C_FILE = "525H0124s.c"        # your C source
EXE_BASE = "525H0124"        # executable base name (nqt.exe on Windows)
TESTS_FILE = "tests.txt"
INPUT_FILE = "input.inp"
OUTPUT_FILE = "output.out"
TOL = 0.0005            # tolerance for rounded 3-decimal compare

def find_or_build_exe():
    # On Windows we'll expect nqt.exe, else nqt
    is_win = (os.name == "525H0124")
    exe_name = EXE_BASE + (".exe" if is_win else "")
    if os.path.exists(exe_name):
        print(f"Found existing executable: {exe_name}")
        return exe_name
    # try to compile if gcc available and C file present
    if not os.path.exists(C_FILE):
        print(f"ERROR: neither {exe_name} nor source {C_FILE} found in {os.getcwd()}")
        return None
    gcc = shutil.which("gcc")
    if not gcc:
        print("gcc not found in PATH. Cannot compile automatically. Please compile manually (e.g. gcc nqt.c -o nqt -lm)")
        return None
    cmd = [gcc, C_FILE, "-o", EXE_BASE]
    if is_win:
        # produce .exe automatically by -o nqt (Windows will create nqt.exe)
        pass
    print("Compiling:", " ".join(cmd))
    proc = subprocess.run(cmd, capture_output=True, text=True)
    if proc.returncode != 0:
        print("Compile failed. stderr:\n", proc.stderr)
        return None
    # give extension on Windows
    exe_name = EXE_BASE + (".exe" if is_win else "")
    if os.path.exists(exe_name):
        print("Compile succeeded ->", exe_name)
        return exe_name
    print("Compile finished but executable not found.")
    return None

def run_one_case(exe_path, inp_line):
    # inp_line: "n dc dg ld Weather"
    # write input.inp (no trailing newline requirement, but we'll put newline)
    with open(INPUT_FILE, "w", encoding="utf-8") as f:
        f.write(inp_line.strip() + "\n")
    # run: pass input filename as program argument (your C main expects ./nqt input.inp)
    cmd = [exe_path, INPUT_FILE]
    try:
        # use timeout to avoid hangs
        p = subprocess.run(cmd, capture_output=True, text=True, timeout=6)
    except subprocess.TimeoutExpired:
        return False, "TIMEOUT running executable"
    except FileNotFoundError as e:
        return False, f"EXECUTABLE_NOT_FOUND: {e}"
    # read output.out
    if not os.path.exists(OUTPUT_FILE):
        # maybe program printed to stdout instead; try parse stdout
        out_text = p.stdout.strip()
    else:
        try:
            out_text = open(OUTPUT_FILE, encoding="utf-8").read().strip()
        except Exception as e:
            return False, f"FAILED_READ_OUTPUT: {e}"
    # parse out_text expecting: bc bg nd
    parts = out_text.split()
    if len(parts) < 3:
        return False, f"BAD_OUTPUT_FORMAT: '{out_text}'"
    try:
        bc = int(parts[0])
        bg = int(parts[1])
        nd = float(parts[2])
    except Exception as e:
        return False, f"PARSE_ERROR: {e} with output '{out_text}'"
    return True, (bc, bg, nd, out_text)

def compare_result(bc, bg, nd, exp_bc, exp_bg, exp_nd):
    ok = (bc == exp_bc) and (bg == exp_bg) and (round(nd,3) == round(exp_nd,3))
    return ok

def main():
    exe = find_or_build_exe()
    if not exe:
        print("No executable available. Fix by compiling nqt.c or providing nqt.exe in this folder.")
        return
    # normalize path
    exe_path = os.path.join(os.getcwd(), exe) if os.path.dirname(exe)=='' else exe
    # read tests
    if not os.path.exists(TESTS_FILE):
        print("tests.txt not found in current dir.")
        return
    total = 0
    passed = 0
    failed_cases = []
    with open(TESTS_FILE, encoding="utf-8") as f:
        for lineno, raw in enumerate(f, start=1):
            line = raw.strip()
            if not line or line.startswith("#"): continue
            parts = line.split()
            if len(parts) < 8:
                failed_cases.append((lineno, line, "BAD_TEST_LINE"))
                continue
            total += 1
            inp_fields = parts[0:5]
            inp_line = " ".join(inp_fields)
            try:
                exp_bc = int(parts[5]); exp_bg = int(parts[6]); exp_nd = float(parts[7])
            except:
                failed_cases.append((lineno, line, "BAD_EXPECTED_FORMAT"))
                continue
            ok, res = run_one_case(exe_path, inp_line)
            if not ok:
                failed_cases.append((lineno, line, res))
                continue
            bc, bg, nd, raw_output = res
            if compare_result(bc, bg, nd, exp_bc, exp_bg, exp_nd):
                passed += 1
            else:
                failed_cases.append((lineno, line, f"EXPECTED {exp_bc} {exp_bg} {exp_nd:.3f} GOT {bc} {bg} {nd:.3f} RAW:'{raw_output}'"))
    # summary
    print("===================================")
    print(f"Total tests: {total}")
    print(f"Passed     : {passed}")
    print(f"Failed     : {len(failed_cases)}")
    print(f"Score      : {passed/total*100:.2f}%")
    print("===================================\n")
    if failed_cases:
        print("FAILED CASES (full list):\n")
        for lineno, line, info in failed_cases:
            print(f"#{lineno}: {line}")
            print(" ->", info)
            print("-----------------------------------")
    else:
        print("All tests passed!")

if __name__ == '__main__':
    main()
