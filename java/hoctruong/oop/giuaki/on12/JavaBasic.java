
public class JavaBasic {

    public static void main(String[] args) {

        int[] a = {1, 3, -3, 7, 32, 21, 110, 30, 32, 2};
        System.out.println(sumSpecialMultiplesInRange(a, 3, 8, 3));

        String str = "Nigga balls fuck nigga nguYEn Gaya";
        System.out.println(countQualifiedWords(str, 4));

    }

    public static int sumSpecialMultiplesInRange(int[] a, int begin, int end, int k) {

        if (a == null || begin < 0 || end < 0 || begin > end || begin > a.length - 1 || end > a.length - 1 || k == 0) {
            return -1;
        }

        int sum = 0;

        for (int i = begin; i < end + 1; i++) {
            if (a[i] % k == 0 && a[i] % (2 * k) != 0) {
                sum += a[i];
            }
        }

        return sum;

    }

    public static int countQualifiedWords(String str, int minLen) {

        if (str == null || str.trim().isEmpty()) {
            return 0;
        }

        int count = 0;
        int vowelCount = 0;
        String vowels = "aeouiAEOUI";
        String[] words = str.toLowerCase().trim().split(" ");

        for (String w : words) {

            vowelCount = 0;

            for (int i = 0; i < w.length(); i++) {
                if (vowels.contains(w.charAt(i) + "") && w.length() >= minLen) {
                    vowelCount++;
                }

                if (vowelCount > 1) {
                    count++;
                    break;
                }
            }
        }

        return count;

    }

}
