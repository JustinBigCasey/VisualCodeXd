
public class JavaBasic {

    public static void main(String[] args) {

        int[] a = {-3, 1, -2, 12, 43, 1, 2, 5, 12};
        String str = "pham tran anh oanh";
        String str1 = "Lop: 21050201";
        String str2 = "Le Thi My Tam Tam";

        System.out.println(sumEvenElements(a));
        System.out.println(uppercaseFirstVowels(str));
        System.out.println(findMinPositiveElement(a));
        System.out.println(getClassName(str1));
        System.out.println(findFirstMod4Element(a));
        System.out.println(countString(str2, "tam"));

    }

    public static int sumEvenElements(int[] a) {

        int sum = 0;

        for (int i = 0; i < a.length; i++) {
            if (a[i] % 2 == 0) {
                sum += a[i];
            }
        }

        return sum;

    }

    public static String uppercaseFirstVowels(String str) {

        String result = "";
        String[] words = str.toLowerCase().split(" ");
        String vowels = "aeiou";

        for (String w : words) {
            if (vowels.contains(w.substring(0, 1))) {
                result += w.substring(0, 1).toUpperCase() + w.substring(1).toLowerCase() + " ";
            } else {
                result += w.toLowerCase() + " ";
            }
        }

        return result.trim();

    }

    public static int findMinPositiveElement(int[] a) {

        int min = 0;
        int index = -1;

        for (int i = 0; i < a.length; i++) {
            if (a[i] > 0) {
                if (index == -1 || a[i] < min) {
                    min = a[i];
                    index = i;
                }
            }
        }

        return index;

    }

    public static String getClassName(String str) {

        if (str.startsWith("Lop: ")) {
            return str.substring(str.indexOf(":") + 1).trim();
        }

        return "";

    }

    public static int findFirstMod4Element(int[] a) {

        for (int i = 0; i < a.length; i++) {
            if (a[i] % 4 == 0) {
                return i;
            }
        }

        return -1;

    }

    public static int countString(String str, String k) {

        String[] words = str.trim().toLowerCase().split(" ");
        String target = k.trim().toLowerCase();
        int count = 0;

        for (String w : words) {
            if (w.equals(target)) {
                count++;
            }
        }

        return count;

    }

}
