
public class JavaBasic {

    public static void main(String[] args) {

        int[] a = {5, 1, 2, 3, 4, 15, 55, 54, 125, 33, 1, 30};
        String str = "Cong nghe thong tin TDTU";
        String str1 = "Email: nguyen.vangay@student.tdtu.edu.vn";
        char c = 't';

        System.out.println(sumDivisibleBy3And5(a));
        System.out.println(capitalizeWordEnds(str));
        System.out.println(findLastMinPositiveIndex(a));
        System.out.println(extractEmailPrefix(str1));
        System.out.println(findSecondLargest(a));
        System.out.println(countWordsStartingWith(str, c));

    }

    public static int sumDivisibleBy3And5(int[] a) {

        int sum = 0;

        for (int i = 0; i < a.length; i++) {

            if (a[i] % 3 == 0 && a[i] % 5 == 0) {
                sum += a[i];
            }

        }

        return sum;

    }

    public static String capitalizeWordEnds(String str) {

        String[] words = str.trim().split(" ");
        String result = "";

        for (String w : words) {

            result += w.substring(0, w.length() - 1).toLowerCase() + w.substring(w.length() - 1).toUpperCase() + " ";

        }

        return result.trim() + "";

    }

    public static int findLastMinPositiveIndex(int[] a) {

        int index = -1;
        int min = 0;

        for (int i = 0; i < a.length; i++) {

            if (a[i] > 0) {
                if (index == -1 || a[i] <= min) {
                    min = a[i];
                    index = i;
                }
            }

        }

        return index;

    }

    public static String extractEmailPrefix(String str) {

        if (str.startsWith("Email: ") && str.contains("@")) {
            return str.substring(str.indexOf(":") + 1, str.indexOf("@")).trim();
        }

        return "";

    }

    public static int findSecondLargest(int[] a) {

        int max1 = Integer.MIN_VALUE;
        int max2 = Integer.MIN_VALUE;

        for (int i = 0; i < a.length; i++) {

            if (a[i] > max1) {
                max2 = max1;
                max1 = a[i];
            } else if (a[i] > max2 && a[i] != max1) {
                max2 = a[i];
            }

        }

        return max2;

    }

    public static int countWordsStartingWith(String str, char c) {

        String[] words = str.trim().toLowerCase().split(" ");
        int count = 0;

        String cu = String.valueOf(c).toLowerCase();

        for (String w : words) {

            if (w.substring(0, 1).equals(cu)) {
                count++;
            }

        }

        return count;
    }

}
