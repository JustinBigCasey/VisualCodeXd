
public class JavaBasic {

    public static void main(String[] args) {

        int[] array = {1, -3, -5, 3, 5, -9, 1, 5, 2, 3, 3};
        String str = "PhAm thI uyOn uyen";

        System.out.println(sumNegativeElement(array));
        System.out.println(upperCaseFirstVowels(str));
        System.out.println(findMinNegativeElement(array));
        System.out.println(getName(str));
        System.out.println(findFirstMod3Element(array));
        System.out.println(countString(str, "Uyen"));
        System.out.println(wtf(array, 3, 10, 3));
        System.out.println(gay(str, 3));
    }

    public static int sumNegativeElement(int[] a) {

        int sum = 0;

        for (int i = 0; i < a.length; i++) {
            if (a[i] < 0) {
                sum += a[i];
            }
        }

        return sum;

    }

    public static String upperCaseFirstVowels(String str) {

        String[] words = str.trim().split(" ");
        String result = "";

        for (String w : words) {

            String firstChar = w.substring(0, 1);

            if ("ueoai".contains(firstChar)) {
                result += w.substring(0, 1).toUpperCase() + w.substring(1) + " ";
            } else {
                result += w + " ";

            }

        }

        return result.trim();

    }

    public static int findMinNegativeElement(int[] a) {

        int min = 0;
        int index = -1;

        for (int i = 0; i < a.length; i++) {
            if (a[i] < min) {
                min = a[i];
                index = i;
            }
        }

        return index;

    }

    public static String getName(String str) {

        return str.substring(str.indexOf(":") + 1).trim();

    }

    public static int findFirstMod3Element(int[] a) {

        for (int i = 0; i < a.length; i++) {

            if (a[i] % 3 == 0) {
                return i;
            }

        }

        return -1;

    }

    public static int countString(String str, String k) {

        int count = 0;

        String[] words = str.trim().toLowerCase().split(" ");
        k = k.toLowerCase().trim();

        for (String w : words) {

            if (k.equals(w)) {
                count++;
            }

        }

        return count;

    }

    public static int wtf(int[] a, int begin, int end, int k) {

        int index = -1;

        if (begin < 0 || end > a.length) {
            return -1;
        }

        for (int i = begin; i < end; i++) {
            if (a[i] == k) {
                index = i;
            }
        }

        return index;

    }

    public static int gay(String str, int begin) {

        int count = 0;

        for (int i = begin; i < str.length(); i++) {

            if ((str.charAt(i) + "").equals("A") || (str.charAt(i) + "").equals("E") || (str.charAt(i) + "").equals("O") || (str.charAt(i) + "").equals("I") || (str.charAt(i) + "").equals("U")) {
                count++;
            }

        }

        return count;

    }

}
