import java.util.Random;
import java.util.Scanner;

public class diceroll {

    static Scanner scan = new Scanner(System.in);
    static Random random = new Random();

    public static void main(String[] args) {

        int numOfDice;
        int total = 0;

        do {
            System.out.print("Enter the # of dice to roll: ");
            numOfDice = scan.nextInt();

            if(numOfDice <= 0)
                System.out.println("Please enter number > 0");

        } while (numOfDice <= 0);

        for (int i = 0; i < numOfDice; i++){

            int roll = random.nextInt(1, 7);
            printDie(roll);
            System.out.printf("%d.You rolled: %d", i + 1, roll);
            total += roll;
        }

        System.out.println("\nTotal: " + total);

    }

    static void printDie(int roll){

        String dice1 = """

             ---------
            |         |
            |    ●    |
            |         |
             ----------
                """;

        String dice2 = """

             ---------
            |  ●      |
            |         |
            |      ●  |
             ----------
                """;

        String dice3 = """

             ---------
            |  ●      |
            |    ●    |
            |      ●  |
             ----------
                """;


        String dice4 = """

             ---------
            |  ●   ●  |
            |         |
            |  ●   ●  |
             ----------
                """;

        String dice5 = """

             ---------
            |  ●   ●  |
            |    ●    |
            |  ●   ●  |
             ----------
                """;

        String dice6 = """
        
             ---------
            |  ●   ●  |
            |  ●   ●  |
            |  ●   ●  |
             ----------
                """;

        switch(roll){
            case 1 -> System.out.println(dice1);
            case 2 -> System.out.println(dice2);
            case 3 -> System.out.println(dice3);
            case 4 -> System.out.println(dice4);
            case 5 -> System.out.println(dice5);
            case 6 -> System.out.println(dice6);
            default -> System.out.println("Niga wat");
        }
    }

}
