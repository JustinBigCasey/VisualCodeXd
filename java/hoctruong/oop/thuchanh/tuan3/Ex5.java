
public class Ex5 {

    public static void main(String[] args) {

        String str = "You are living on a Plane. What you style Flatland is the vast level surface of what I may call a fluid, on, or in, the top of which you and your countrymen move about, without rising above it or falling below it.";

        Object[][] result = countAppear(str);

        for (int i = 0; i < result.length; i++) {
            System.out.println("  \'" + result[i][0] + "\', " + result[i][1] + ",");
        }

    }

    public static Object[][] countAppear(String str) {

        String cleanText = str.toLowerCase().replaceAll("[^a-z0-9\\s]", "");

        String[] words = cleanText.split("\\s+");

        String[] uniqueWords = new String[words.length];
        int[] counts = new int[words.length];
        int uniqueCount = 0;

        for (int i = 0; i < words.length; i++) {
            String currentWord = words[i];
            if (currentWord.isEmpty()) {
                continue;
            }

            int foundIndex = -1;
            for (int j = 0; j < uniqueCount; j++) {
                if (uniqueWords[j].equals(currentWord)) {
                    foundIndex = j;
                    break;
                }
            }

            if (foundIndex != -1) {
                counts[foundIndex]++;
            } else {
                uniqueWords[uniqueCount] = currentWord;
                counts[uniqueCount] = 1;
                uniqueCount++;
            }
        }

        Object[][] resultMatrix = new Object[uniqueCount][2];
        for (int i = 0; i < uniqueCount; i++) {
            resultMatrix[i][0] = uniqueWords[i];
            resultMatrix[i][1] = counts[i];
        }

        return resultMatrix;
    }

}
