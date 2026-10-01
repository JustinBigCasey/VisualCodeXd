
public class JavaBasic {

    public static void main(String[] args) {
        int[] a1 = {4, 1, 2, 54, 12, 33, 23, -3, -6};
        int k1 = 3;
        System.out.println("a. subarray max avg: " + sumSubarrayWithMaxAverage(a1, k1));

        String str1 = "aaabbc ddeeea";
        System.out.println("b. Compress string: \"" + compressRepeatedChars(str1) + "\"");

        int[] a2 = {1, 2, 3, 4, 5, 7, 9, 10};
        System.out.println("c. Longest alternating parity: " + findLongestAlternatingParityLength(a2));

        String header = "Authorization: Bearer mySecretToken123";
        System.out.println("d. Extracted token: \"" + extractBearerToken(header) + "\"");

        int[] a3 = {3, 4, -1, 1};
        System.out.println("e. Smallest missing positive: " + findSmallestMissingPositive(a3));

        String str2 = "Listen silent enlist stone";
        String target = "silent";
        System.out.println("f. Count anagram words: " + countAnagramWords(str2, target));
    }

    public static int sumSubarrayWithMaxAverage(int[] a, int k) {
        if (a == null || k <= 0 || a.length < k) {
            return 0;
        }

        int currentSum = 0;
        for (int i = 0; i < k; i++) {
            currentSum += a[i];
        }

        int maxSum = currentSum;

        for (int i = k; i < a.length; i++) {
            currentSum += a[i] - a[i - k];
            if (currentSum > maxSum) {
                maxSum = currentSum;
            }
        }

        return maxSum;
    }

    public static String compressRepeatedChars(String str) {
        if (str == null || isBlank(str)) {
            return "";
        }

        String result = "";
        int n = str.length();
        int i = 0;

        while (i < n) {
            if (str.charAt(i) == ' ') {
                result += ' ';
                i++;
                continue;
            }

            char currentChar = str.charAt(i);
            int count = 0;
            int j = i;

            while (j < n && str.charAt(j) == currentChar) {
                count++;
                j++;
            }

            result += currentChar;
            if (count > 1) {
                result += count;
            }

            i = j;
        }

        return result;
    }

    public static int findLongestAlternatingParityLength(int[] a) {
        if (a == null || a.length == 0) {
            return 0;
        }

        int maxLen = 1;
        int currentLen = 1;

        for (int i = 1; i < a.length; i++) {
            int rem1 = a[i] % 2;
            if (rem1 < 0) {
                rem1 = -rem1;
            }

            int rem2 = a[i - 1] % 2;
            if (rem2 < 0) {
                rem2 = -rem2;
            }

            if (rem1 != rem2) {
                currentLen++;
                if (currentLen > maxLen) {
                    maxLen = currentLen;
                }
            } else {
                currentLen = 1;
            }
        }

        return maxLen;
    }

    public static String extractBearerToken(String str) {
        if (str == null) {
            return "";
        }

        String prefix = "Authorization: Bearer ";
        if (!str.startsWith(prefix)) {
            return "";
        }

        String token = customTrim(str.substring(prefix.length()));

        if (token.length() == 0 || token.contains(" ")) {
            return "";
        }

        return token;
    }

    public static int findSmallestMissingPositive(int[] a) {
        if (a == null || a.length == 0) {
            return 1;
        }

        int n = a.length;
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = a[i];
        }

        for (int i = 0; i < n; i++) {
            while (arr[i] > 0 && arr[i] <= n && arr[arr[i] - 1] != arr[i]) {
                int temp = arr[arr[i] - 1];
                arr[arr[i] - 1] = arr[i];
                arr[i] = temp;
            }
        }

        for (int i = 0; i < n; i++) {
            if (arr[i] != i + 1) {
                return i + 1;
            }
        }

        return n + 1;
    }

    public static int countAnagramWords(String str, String target) {
        if (str == null || target == null || isBlank(str) || isBlank(target)) {
            return 0;
        }

        int count = 0;
        int n = str.length();
        int i = 0;

        while (i < n) {
            while (i < n && str.charAt(i) == ' ') {
                i++;
            }

            if (i >= n) {
                break;
            }

            int start = i;
            while (i < n && str.charAt(i) != ' ') {
                i++;
            }
            String word = str.substring(start, i);

            if (isAnagram(word, target)) {
                count++;
            }
        }

        return count;
    }

    private static boolean isAnagram(String s1, String s2) {
        if (s1.length() != s2.length()) {
            return false;
        }

        int[] counts = new int[26];

        for (int i = 0; i < s1.length(); i++) {
            char c1 = toLowerCase(s1.charAt(i));
            char c2 = toLowerCase(s2.charAt(i));

            if (c1 >= 'a' && c1 <= 'z') {
                counts[c1 - 'a']++;
            }
            if (c2 >= 'a' && c2 <= 'z') {
                counts[c2 - 'a']--;
            }
        }

        for (int i = 0; i < 26; i++) {
            if (counts[i] != 0) {
                return false;
            }
        }

        return true;
    }

    private static char toLowerCase(char c) {
        if (c >= 'A' && c <= 'Z') {
            return (char) (c + 32);
        }
        return c;
    }

    private static boolean isBlank(String s) {
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) != ' ') {
                return false;
            }
        }
        return true;
    }

    private static String customTrim(String s) {
        int start = 0;
        int end = s.length() - 1;

        while (start <= end && s.charAt(start) == ' ') {
            start++;
        }
        while (end >= start && s.charAt(end) == ' ') {
            end--;
        }

        if (start > end) {
            return "";
        }
        return s.substring(start, end + 1);
    }
}
