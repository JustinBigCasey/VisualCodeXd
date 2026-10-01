
public class ExString2 {

    public static void main(String[] args) {

        String paragraph = "The Edge Surf is of course also a whole lot better, which will hopefully win Microsoft some converts. It offers time trial, support for other input methods like touch and gamepads, accessibility improvements, high scores, and remastered visuals.";
        String word = "the";

        System.out.println(countWord(paragraph));
        System.out.println(countSentence(paragraph));
        System.out.println(countAppear(paragraph, word));

    }

    public static int countWord(String paragraph) {

        int count = 1;

        paragraph = paragraph.trim();

        for (int i = 0; i < paragraph.length() - 1; i++) {

            if (paragraph.charAt(i) == ' ' && paragraph.charAt(i + 1) != ' ') {
                count++;
            }
        }

        return count;
    }

    public static int countSentence(String paragraph) {

        int count = 0;

        for (int i = 0; i < paragraph.length(); i++) {

            if (paragraph.charAt(i) == '.') {
                if (i == 0 || paragraph.charAt(i - 1) != '.') {
                    count++;
                }
            }
        }

        return count;
    }

    public static int countAppear(String paragraph, String word) {

        int count = 0;
        String cleanPara = paragraph.replace(",", "").replace(".", " ");
        String[] words = cleanPara.trim().toLowerCase().split(" ");

        for (String w : words) {

            if (w.equals(word.toLowerCase())) {
                count++;
            }

        }

        return count;

    }

}
