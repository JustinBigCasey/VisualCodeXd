
public class Exercise {

    public static void main(String[] args) {

        String name = "  ho ChI kim minh  "; 
        name = name.trim();

        // 1
        System.out.println("1. Words in name: " + countWord(name));

        // 2
        String firstName = name.substring(name.lastIndexOf(' ') + 1);
        System.out.println("2. First name: " + firstName);


        // 3 
        String lastName = name.substring(0, name.indexOf(' '));
        System.out.println("3. Last name: " + lastName);


        // 4
        String middleName = name.substring(name.indexOf(' ') + 1, name.lastIndexOf(' ') + 1);
        System.out.println("4. Middle name: " + middleName);


        // 5
        System.out.println("5. Capitalize first character each word: " + capitaName(name));


        // 6
        System.out.println("6. Formalize name: " + formalize(name));


    }


    // 1
    public static int countWord(String name) {

        if (name == null || name.trim().isEmpty()) 
            return 0;
        

        name = name.trim();
        int count = 1;

        for (int i = 0; i < name.length(); i++) {
            if(name.charAt(i) == ' ' && name.charAt(i + 1) != ' ') {
                count++;
            }
        }

        return count;
    }



    // 5
    public static String capitaName(String name) {

        if (name == null || name.trim().isEmpty())
            return name;

        String[] words = name.trim().split("\\s+");
        String result = "";

        for (String w : words) 
            result += Character.toUpperCase(w.charAt(0)) + (w.substring(1).toLowerCase()) + (" ");

        return result.trim();

    }

    

    //6
    public static String formalize(String name) {

        if (name == null || name.trim().isEmpty())
            return name;
        
        
        String[] words = name.trim().split("\\s+");

        String result = "";

        for (String w : words)
            result += w + (" ");

        return result.trim();

    }


}