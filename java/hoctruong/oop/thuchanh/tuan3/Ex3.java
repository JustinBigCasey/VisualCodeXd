
public class Ex3 {

    public static void main(String[] args) {

        String name = "ho chi kim minh";

        System.out.println(firstLast(name));
        System.out.println(middle(name));
        System.out.println(capitalize(name));
        System.out.println(vowels(name));
    }

    public static String firstLast(String name) {

        name = name.trim();

        String first = name.substring(0, name.indexOf(" "));
        String last = name.substring(name.lastIndexOf(" ") + 1);

        return first + " " + last;

    }

    public static String middle(String name) {

        name = name.trim();

        return name.substring(name.indexOf(" ") + 1, name.lastIndexOf(" "));

    }

    public static String capitalize(String name) {

        name = name.trim();

        String[] words = name.split("\\s+");
        String result = "";

        for (String w : words) {
            result += w.substring(0, 1).toUpperCase() + w.substring(1) + " ";
        }

        return result.trim();

    }

    public static String vowels(String name) {

        name = name.trim();

        String[] words = name.split("\\s+");
        String result = "";

        for (String w : words) {

            for (int i = 0; i < w.length(); i++) {
                if (w.substring(i, i + 1).equalsIgnoreCase("a") || w.substring(i, i + 1).equalsIgnoreCase("e") || w.substring(i, i + 1).equalsIgnoreCase("i") || w.substring(i, i + 1).equalsIgnoreCase("o") || w.substring(i, i + 1).equalsIgnoreCase("u")) {
                    result += w.substring(i, i + 1).toUpperCase();
                } else {
                    result += w.substring(i, i + 1).toLowerCase();
                }
            }

            result += " ";

        }

        return result.trim();

    }

}
