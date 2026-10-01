
public class JavaBasic {

    public static void main(String[] args) {

        int[] a = {1, -4, 3, -12, 55, 24, 1, 4};
        String str = "ho uuy chi chi minh";
        String str1 = "Dia chi: 19 Nguyen Huu Tho";

        System.out.println(sumPositiveElements(a));
        System.out.println(uppercaseFirstConsonants(str));
        System.out.println(findMaxPositiveElement(a));
        System.out.println(getAddress(str1));
        System.out.println(findFirstMod5Element(a));
        System.out.println(countString(str, "cHi"));

    }

    public static int sumPositiveElements(int[] a) {

        int sum = 0;

        for (int i = 0; i < a.length; i++) {
            if (a[i] > 0) {
                sum += a[i];
            }
        }

        return sum;
    }

    public static String uppercaseFirstConsonants(String str) {

        String result = "";
        String[] words = str.trim().split(" ");
        String vowel = "aeouiAEOUI";

        for (String w : words) {
            if (vowel.contains(w.substring(0, 1))) {
                result += w.substring(0) + " ";
            } else {
                result += w.substring(0, 1).toUpperCase() + w.substring(1) + " ";
            }
        }

        return result.trim();

    }

    public static int findMaxPositiveElement(int[] a) {

        int max = 0;
        int index = -1;

        for (int i = 0; i < a.length; i++) {
            if (a[i] > 0 && a[i] > max) {
                max = a[i];
                index = i;
            }
        }

        return index;

    }

    public static String getAddress(String str) {

        if (!str.startsWith("Dia chi: ")) {
            return "";
        }

        return str.substring(str.indexOf(":") + 1).trim();
    }

    public static int findFirstMod5Element(int[] a) {

        for (int i = 0; i < a.length; i++) {
            if (a[i] % 5 == 0) {
                return i;
            }
        }

        return -1;
    }

    public static int countString(String str, String k) {

        k = k.toLowerCase().trim();
        str = str.toLowerCase().trim();
        int count = 0;

        String[] words = str.split(" ");

        for (String w : words) {
            if (w.equals(k)) {
                count++;
            }
        }

        return count;

    }

}
