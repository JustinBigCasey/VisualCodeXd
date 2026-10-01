:- use_module(library(clpfd)).

sudoku(Rows) :-
    length(Rows, 9),
    
    maplist(same_length(Rows), Rows),
    append(Rows, Vs), Vs ins 1..9,
    
    maplist(all_distinct, Rows),
    
    transpose(Rows, Columns),
    maplist(all_distinct, Columns),
    
    Rows = [R1,R2,R3,R4,R5,R6,R7,R8,R9],
    blocks(R1, R2, R3),
    blocks(R4, R5, R6),
    blocks(R7, R8, R9),
    
    maplist(label, Rows).

blocks([], [], []).
blocks([A,B,C|Bs1], [D,E,F|Bs2], [G,H,I|Bs3]) :-
    all_distinct([A,B,C,D,E,F,G,H,I]),
    blocks(Bs1, Bs2, Bs3).