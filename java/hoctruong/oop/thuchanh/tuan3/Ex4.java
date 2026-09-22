
public class Ex4 {

    public static void main(String[] args) {

        String name = "ho chi kim minh";
        String name2 = "abcba";

        System.out.println(name.length());

        String[] words = name.trim().split("\\s+");
        System.out.println(words.length);

        System.out.println(name.concat(name2));

        System.out.println(isPalindrone(name2));

    }

    public static boolean isPalindrone(String name) {

        int left = 0;
        int right = name.length() - 1;

        while (left < right) {

            if (name.charAt(left) != name.charAt(right)) {
                return false;
            }

            left++;
            right--;
        }

        return true;

    }

}
