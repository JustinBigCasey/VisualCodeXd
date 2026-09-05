import java.util.Scanner;


public class arai {

    static Scanner scan = new Scanner(System.in);

    public static void main(String[] args) {

        String[] questions = {
            "What is gay?", 
            "What is your mom?", 
            "Why are you gay?", 
            "Who is in Paris?",
            "Did you shower yesterday?"
        };

        String[][] options = {
            {"A. Gay Men Kissing" , "B. I dont know", "C. You are gay", "D. Fuck you"}, 
            {"A. Fat", "B. A young girl", "C. Deez Nutss", "D. Balls"}, 
            {"A. What", "B. Yes", "C. Because I am a nigger", "D. Nigga I am gay"}, 
            {"A. Ellen Joe", "B. Kenye West", "C. Donald Trump", "D. Nigga"},
            {"A. Yes", "B. No", "C. Maybe", "D. I do"}
        };

        String[] answers = {"A", "A", "C", "D", "B"};
        int score = 0;
        String guess;

        System.out.println("===== GAY QUIZ GAYME =====\n");

        for(int i = 0; i < questions.length; i++) {

            System.out.printf("%d. %s\n", i + 1, questions[i]);

            for(String option : options[i]) {
                System.out.println(option);
            }

            System.out.print("Enter your guess: ");
            guess = scan.next();

            if(guess.toUpperCase().equals(answers[i])) {
                System.out.println("\n// CORRECT ! \\\\\n");
                score++;
            } 

            else {
                System.out.println("\n # WRONG # \n");
            }

        }

        System.out.printf("FINAL SCORE %d/%d", score, questions.length);
        
        scan.close();

    }

}