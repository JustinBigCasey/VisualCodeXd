
public class ExString1 {

    public static void main(String[] args) {

        String str = "Ho quy chi Minh";

        System.out.println(shortName(str));
        System.out.println(hashtagName(str));
        System.out.println(upperCaseAllVowel(str));
        System.out.println(upperCaseAllN(str));

    }

    public static String shortName(String str) {

        return str.substring(str.lastIndexOf(" ") + 1) + " " + str.substring(0, str.indexOf(" "));

    }

    public static String hashtagName(String str) {

        return "#" + str.substring(str.lastIndexOf(" ") + 1) + str.substring(0, str.indexOf(" "));

    }

    public static String upperCaseAllVowel(String str) {

        String result = "";
        String vowel = "ueoia";

        for (int i = 0; i < str.length(); i++) {
            if (vowel.contains(str.charAt(i) + "")) {
                result += (str.charAt(i) + "").toUpperCase();
            } else {
                result += str.charAt(i) + "";
            }

        }

        return result.trim();

    }

    public static String upperCaseAllN(String str) {

        String result = "";

        for (int i = 0; i < str.length(); i++) {
            if (str.charAt(i) == ('n')) {
                result += "N";
            } else {
                result += str.charAt(i) + "";
            }
        }

        return result.trim();

    }

}
