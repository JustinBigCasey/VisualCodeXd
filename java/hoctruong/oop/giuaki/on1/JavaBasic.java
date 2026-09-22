
public class JavaBasic {

    public static void main(String[] args) {

        int[] a = {5, 12, 25, 33, 49, 50, 64, 72, 81, 100, 115};
        String str = "An da an chuoi o nha An";
        String pros = "Product ID: gay ass nigga";
        String k = "an";

        // System.out.println(sumOddPrimes(a));
        // System.out.println(uppercaseFirstConsonants(str));
        // System.out.println(findMaxEvenIndex(a));
        // System.out.println(getProductCode(pros));
        // System.out.println(findFirstPerfectSquare(a));
        System.out.println(countWordExact(str, k));

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

    public static int sumOddPrimes(int[] a) {

        int sum = 0;

        for (int i = 0; i < a.length; i++) {

            if (a[i] % 2 != 0 && isPrime(a[i])) {
                sum += a[i];
            }
        }

        return sum;

    }

    public static String uppercaseFirstConsonants(String str) {

        String[] words = str.trim().split(" ");
        String result = "";

        for (String w : words) {

            String firstLetter = w.substring(0, 1).toLowerCase();

            if ("aeiou".contains(firstLetter)) {
                result += w + " ";
            } else {
                result += w.substring(0, 1).toUpperCase() + w.substring(1) + " ";
            }

        }

        return result.trim();

    }

    public static int findMaxEvenIndex(int[] a) {

        int maxEven = 0;
        int index = -1;

        for (int i = 0; i < a.length; i++) {

            if (a[i] % 2 == 0) {
                if (index == -1 || a[i] > maxEven) {
                    maxEven = a[i];
                    index = i;
                }

            }

        }

        return index;

    }

    public static String getProductCode(String str) {

        if (str.startsWith("Product ID:")) {
            return str.substring(str.indexOf(":") + 1).trim();
        }

        return "";

    }

    public static int findFirstPerfectSquare(int[] a) {

        for (int i = 0; i < a.length; i++) {

            if (a[i] >= 0) {
                int sqrt = (int) Math.sqrt(a[i]);

                if (sqrt * sqrt == a[i]) {
                    return i;
                }
            }

        }

        return -1;

    }

    public static int countWordExact(String str, String k) {

        k = k.trim().toLowerCase();
        int count = 0;

        String[] words = str.trim().toLowerCase().split(" ");

        for (String w : words) {

            if (w.equals(k)) {
                count++;
            }

        }

        return count;

    }

}
