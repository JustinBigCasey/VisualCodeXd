
public class JavaBasic {

    public static void main(String[] args) {

        int[] a = {1, -4, -32, 34, 12, 53, 12, 16};
        String str = "le van anh uyen";
        String str1 = "Khoa: Cong nghe thong tin ";
        String str2 = "Vo Thi Mai Mai";
        String k = "maI";

        System.out.println(sumMod3Elements(a));
        System.out.println(uppercaseFirstVowels(str));
        System.out.println(findFirstNegativeElement(a));
        System.out.println(getFaculty(str1));
        System.out.println(findLastEvenElement(a));
        System.out.println(countString(str2, k));

    }

    public static int sumMod3Elements(int[] a) {

        int sum = 0;

        for (int i = 0; i < a.length; i++) {
            if (a[i] % 3 == 0) {
                sum += a[i];
            }
        }

        return sum;

    }

    public static String uppercaseFirstVowels(String str) {

        String vowel = "aeouiAEOUI";
        String[] words = str.toLowerCase().trim().split(" ");
        String result = "";

        for (String w : words) {
            if (vowel.contains(w.substring(0, 1))) {
                result += w.substring(0, 1).toUpperCase() + w.substring(1) + " ";
            } else {
                result += w + " ";
            }

        }

        return result.trim();

    }

    public static int findFirstNegativeElement(int[] a) {

        for (int i = 0; i < a.length; i++) {
            if (a[i] < 0) {
                return i;
            }
        }

        return -1;

    }

    public static String getFaculty(String str) {

        if (str.startsWith("Khoa: ")) {
            return str.substring(str.indexOf(":") + 1).trim();
        }

        return "";

    }

    public static int findLastEvenElement(int[] a) {

        for (int i = a.length - 1; i >= 0; i--) {
            if (a[i] % 2 == 0) {
                return i;
            }
        }

        return -1;

    }

    public static int countString(String str, String k) {

        int count = 0;
        String[] words = str.trim().toLowerCase().split(" ");
        String target = k.trim().toLowerCase();

        for (String w : words) {
            if (w.equals(target)) {
                count++;
            }
        }

        return count;

    }

}
