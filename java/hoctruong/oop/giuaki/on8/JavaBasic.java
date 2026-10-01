
public class JavaBasic {

    public static void main(String[] args) {

        int a[] = {6, 12, -22, -5, 31, 11, -22, 4, 67};
        int k = 44;
        String str = "lap trinh bede java bu";
        String str1 = "Diem: 8.5";
        String str2 = "Thong tin cong nghe thong bao";
        String prefix = "thong";

        System.out.println(sumPrimesGreaterThanK(a, k));
        System.out.println(capitalizeVowelsOnly(str));
        System.out.println(findSecondSmallestIndex(a));
        System.out.println(extractScore(str1));
        System.out.println(findFirstSymmetricIndex(a));
        System.out.println(countWordsWithPrefix(str2, prefix));

    }

    public static boolean isPrime(int a) {

        if (a < 2) {
            return false;
        }

        if (a == 2) {
            return true;
        }

        for (int i = 2; i < a; i++) {
            if (a % i == 0) {
                return false;
            }
        }

        return true;

    }

    public static int sumPrimesGreaterThanK(int[] a, int k) {

        int sum = 0;

        for (int i = 0; i < a.length; i++) {
            if (isPrime(a[i]) && a[i] > k) {
                sum += a[i];
            }
        }

        return sum;
    }

    public static String capitalizeVowelsOnly(String str) {

        String stri = str.toLowerCase();
        String result = "";
        String vowel = "aeiou";

        for (int i = 0; i < str.length(); i++) {
            if (vowel.contains(stri.charAt(i) + "")) {
                result += (stri.charAt(i) + "").toUpperCase();
            } else {
                result += (stri.charAt(i) + "");
            }
        }

        return result.trim();

    }

    public static int findSecondSmallestIndex(int[] a) {

        int min1 = 0;
        int min2 = 0;
        int index1 = -1;
        int index2 = -1;

        if (a.length < 2) {
            return -1;
        }

        for (int i = 0; i < a.length; i++) {
            if (a[i] < min1 || min1 == 0) {
                min2 = min1;
                min1 = a[i];
                index2 = index1;
                index1 = i;

            } else if (a[i] < min2) {
                if (a[i] != min1 || min1 == 0) {
                    min2 = a[i];
                    index2 = i;
                }
            }
        }

        return index2;

    }

    public static String extractScore(String str) {

        if (str == null || !str.startsWith("Diem: ")) {
            return "";
        }

        String scoreStr = str.substring(str.indexOf(":") + 1).trim();

        if (scoreStr.isEmpty()) {
            return "";
        }

        try {
            double score = Double.parseDouble(scoreStr);
            if (score >= 0) {
                return scoreStr;
            }
        } catch (NumberFormatException e) {
            return "";
        }

        return "";

    }

    public static int findFirstSymmetricIndex(int[] a) {

        if (a == null || a.length == 0) {
            return -1;
        }

        for (int i = 0; i < a.length; i++) {
            if (a[i] == a[a.length - 1 - i]) {
                return i;
            }
        }

        return -1;

    }

    public static int countWordsWithPrefix(String str, String prefix) {

        String[] words = str.toLowerCase().trim().split("\\s+");
        String target = prefix.trim().toLowerCase();
        int count = 0;

        for (String w : words) {
            if ((w.length()) == (target.length())) {
                count++;
            }
        }

        return count;
    }

}
