import java.util.Random;
import java.util.Scanner;

public class randomgues {

    public static void main(String[] args) {
        
        Scanner scan = new Scanner(System.in);
        Random random = new Random();

        int min = 1;
        int max = 100;
        int numbe = random.nextInt(min, max + 1);
        int chose, count = 0;

        System.out.println("=== NUMBER GUESSING GAME ===");
        System.out.printf("        (%d - %d) \n\n", min, max - 1 );

        while(true) {

            System.out.print("Enter a number: ");
            chose = scan.nextInt();

            if(chose < numbe) {
                System.out.println("The number is HIGHER !");
                count++;
            }

            else if (chose > numbe) {
                System.out.println("The number is LOWER !");
                count++;
            }

            else if (chose == numbe) {
                System.out.println("\n   //YOU WIN \\\\");
                System.out.printf("\n[Total turns: %d]", count);
                break;
            }

            else {
                System.out.println("balls");
            }
        }


    }
}