
public class JavaBasic {

    public static void main(String[] args) {

        int[] a = {5, 12, -4, 77, -3, 12, 43, 55};
        String str = "hoang van em uyen";
        String str1 = "Nam sinh: 2005";
        String str2 = "Nguyen Thanh Nam Nam";
        String k = "nam";

        System.out.println(sumOddElements(a));
        System.out.println(uppercaseFirstConsonants(str));
        System.out.println(findMaxNegativeElement(a));
        System.out.println(getBirthYear(str1));
        System.out.println(findFirstMod7Element(a));
        System.out.println(countString(str2, k));

    }

    public static int sumOddElements(int[] a) {

        int sum = 0;

        for (int i = 0; i < a.length; i++) {
            if (a[i] % 2 != 0) {
                sum += a[i];
            }
        }

        return sum;

    }

    public static String uppercaseFirstConsonants(String str) {

        String result = "";
        String[] words = str.toLowerCase().trim().split(" ");
        String vowel = "aeoui";

        for (String w : words) {
            if (vowel.contains(w.substring(0, 1))) {
                result += w + " ";
            } else {
                result += w.substring(0, 1).toUpperCase() + w.substring(1) + " ";
            }
        }

        return result.trim();

    }

    public static int findMaxNegativeElement(int[] a) {

        int max = 0;
        int index = -1;

        for (int i = 0; i < a.length; i++) {
            if (a[i] < 0) {
                if (a[i] > max || max == 0) {
                    max = a[i];
                    index = i;
                }

            }
        }

        return index;

    }

    public static String getBirthYear(String str) {

        if (str.startsWith("Nam sinh: ")) {
            return str.substring(str.indexOf(":") + 1).trim();
        }

        return "";

    }

    public static int findFirstMod7Element(int[] a) {

        for (int i = 0; i < a.length; i++) {
            if (a[i] % 7 == 0) {
                return i;
            }
        }

        return -1;

    }

    public static int countString(String str, String k) {

        int count = 0;

        String[] words = str.toLowerCase().trim().split(" ");
        String target = k.toLowerCase().trim();

        for (String w : words) {
            if (w.equals(target)) {
                count++;
            }
        }

        return count;

    }

}
