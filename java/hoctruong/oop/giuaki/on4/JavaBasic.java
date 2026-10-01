
public class JavaBasic {

    public static void main(String[] args) {

        int[] a = {1, 5, 6, 7, 96, 125, 656, 53, 14};
        String str = "lap trinh java";
        String str1 = "Course: [501043] - Lap trinh OOP";

        // System.out.println(sumMultiplesOf7NotDivisibleBy5(a));
        // System.out.println(reverseEachWord(str));
        // System.out.println(findLastMaxOddIndex(a));
        // System.out.println(extractCourseCode(str1));
        // System.out.println(countStrictlyIncreasingTriplets(a));
        System.out.println(countWordsContainingChar(str, 'a'));
    }

    public static int sumMultiplesOf7NotDivisibleBy5(int[] a) {

        int sum = 0;

        for (int i = 0; i < a.length; i++) {
            if (a[i] % 7 == 0 && a[i] % 5 != 0) {
                sum += a[i];
            }
        }

        return sum;

    }

    public static String reverseEachWord(String str) {

        String[] words = str.trim().split(" ");
        String result = "";

        for (String w : words) {
            for (int i = w.length() - 1; i >= 0; i--) {
                result += w.charAt(i);
            }
            result += " ";
        }

        return result.trim();

    }

    public static int findLastMaxOddIndex(int[] a) {

        int max = 0;
        int index = -1;

        for (int i = 0; i < a.length; i++) {

            if (a[i] % 2 != 0) {

                if (index == -1 || a[i] >= max) {
                    max = a[i];
                    index = i;
                }
            }
        }

        return index;
    }

    public static String extractCourseCode(String str) {

        int start = str.indexOf("[");
        int end = str.indexOf("]");

        if (str.startsWith("Course: ") && start != -1 && end != -1 && start < end) {
            return str.substring(str.indexOf("[") + 1, str.indexOf("]")).trim();
        }

        return "";
    }

    public static int countStrictlyIncreasingTriplets(int[] a) {

        int sum = 0;

        for (int i = 0; i < a.length - 2; i++) {

            if (a[i] < a[i + 1] && a[i + 1] < a[i + 2]) {
                sum++;
            }
        }

        return sum;

    }

    public static int countWordsContainingChar(String str, char c) {

        String ca = c + "";
        String[] words = str.trim().toLowerCase().split(" ");
        int count = 0;

        for (String w : words) {

            if (w.contains(ca)) {
                count++;
            }

        }

        return count;

    }

}
