
public class JavaBasic {

    public static void main(String[] args) {

        int[] a = {1, 2, 54, 44, 23, -4, 12, 2};
        System.out.println(findMaxEvenInRange(a, 3, 8));

        String str1 = " Oanh va Anh di an kem ";
        System.out.println(formatVowelWords(str1));

        String str2 = " Uyen Oai ao An ";
        System.out.println(formatVowelWords(str2));

    }

    public static int findMaxEvenInRange(int[] a, int begin, int end) {

        int index = -1;
        int max = 0;

        if (a == null || begin > end || begin < 0 || end > a.length - 1) {
            return -1;
        }

        for (int i = begin; i < end + 1; i++) {
            if (a[i] % 2 == 0) {
                if (index == -1 || a[i] >= max) {
                    max = a[i];
                    index = i;
                }
            }
        }

        return index;

    }

    public static String formatVowelWords(String str) {

        if (str == null || str.trim().isEmpty()) {
            return "";
        }

        String[] words = str.trim().toLowerCase().split("\\s+");
        String result = "";
        String vowels = "aeoui";

        for (String w : words) {
            if (vowels.contains(w.substring(0, 1)) && vowels.contains(w.substring(w.length() - 1))) {
                result += w.toUpperCase() + " ";
            } else {
                result += w.toLowerCase() + " ";
            }
        }

        return result.trim();

    }

}
