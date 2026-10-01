
public class JavaBasic {

    public static void main(String[] args) {

        int[] a = {21, 2545, 25452, 1, 7, 0};
        String str = "tdt lap trinh";
        String str1 = "Tel: (028) 37755046";

        // System.out.println(sumPrimesAtEvenIndices(a));
        // System.out.println(swapFirstLastChar(str));
        // System.out.println(findFirstMaxIndex(a));
        // System.out.println(extractPhoneAreaCode(str1));
        // System.out.println(findFirstPalindromeNumber(a));
        System.out.println(countWordsWithLength(str, 3));
    }

    public static boolean isPrime(int a) {

        if (a < 2) {
            return false;
        } else if (a == 2) {
            return true;
        } else {

            for (int i = 2; i < a; i++) {

                if (a % i == 0) {
                    return false;
                }

            }

        }

        return true;

    }

    public static int sumPrimesAtEvenIndices(int[] a) {

        int sum = 0;

        for (int i = 0; i < a.length; i++) {

            if (isPrime(a[i]) && i % 2 == 0) {
                sum += a[i];
            }

        }

        return sum;

    }

    public static String swapFirstLastChar(String str) {

        String[] words = str.trim().split(" ");
        String result = "";

        for (String w : words) {

            if (w.length() <= 1) {
                result += w + " ";
            } else {
                result += w.substring(w.length() - 1) + w.substring(1, w.length() - 1) + w.substring(0, 1) + " ";
            }

        }

        return result.trim();
    }

    public static int findFirstMaxIndex(int[] a) {

        if (a == null && a.length == 0) {
            return -1;
        }

        int max = a[0];
        int index = -1;

        for (int i = 0; i < a.length; i++) {

            if (a[i] > max) {
                max = a[i];
                index = i;
            }

        }

        return index;

    }

    public static String extractPhoneAreaCode(String str) {

        if (str.startsWith("Tel: ") && str.contains("(") && str.contains(")") && str.indexOf("(") < str.indexOf(")")) {
            return str.substring(str.indexOf("(") + 1, str.indexOf(")")).trim();
        }

        return "";
    }

    public static boolean isPanli(int a) {

        int temp = a;
        int reverse = 0;

        while (a > 0) {
            reverse = reverse * 10 + a % 10;
            a /= 10;
        }

        return reverse == temp;

    }

    public static int findFirstPalindromeNumber(int[] a) {

        for (int i = 0; i < a.length; i++) {

            if (isPanli(a[i]) && a[i] >= 0) {
                return i;
            }

        }

        return -1;

    }

    public static int countWordsWithLength(String str, int len) {

        int count = 0;

        String[] words = str.trim().split(" ");

        for (String w : words) {

            if (w.length() == len) {
                count++;
            }

        }

        return count;

    }

}
