import java.util.Random;
import java.util.Scanner;

public class scammachin {

    static Scanner scan = new Scanner(System.in);
    static Random random = new Random();

    public static void main(String[] args) {

        int balance = 1000;
        int bet, payout;
        String[] row;
        String playAgain;

        System.out.println("====== SCAM MACHINE ======");
        System.out.println("Symbols: S A B E F");

        while (balance > 0) {
            System.out.printf("Current balance: $%d", balance);
            System.out.print("\nEnter bet amount: $");
            bet = scan.nextInt();
            scan.nextLine();

            if (bet > balance) {
                System.out.println("\n ! INSUFFICIENT FUNDS ! \n");
                continue;
            }

            else if (bet <= 0) {
                System.out.println("\n ! Bet must be greater than 0 ! \n");
                continue;
            }

            else {
                balance -= bet;
            }

            System.out.println("Spinning...");
            row = spinRow();
            printRow(row);
            payout = getPayout(row, bet);

            if (payout > 0) {
                System.out.printf("\n * YOU WON $%d * \n", payout);
                balance += payout;
            } else {
                System.out.println("Sorry you won nothing lol");
            }

            System.out.print("Play again? (Y/N): ");
            playAgain = scan.nextLine().toUpperCase();
            

            if (playAgain.equals("Y"))
                continue;
            else if (playAgain.equals("N"))
                break;
            else
                continue;

        }

        System.out.println("\n GAME OVER! Your final balance is $" + balance);

        scan.close();

    }

    public static String[] spinRow() {

        String[] symbols = { "S", "A", "B", "E", "F" };
        String[] row = new String[3];

        for (int i = 0; i < 3; i++) {
            row[i] = symbols[random.nextInt(symbols.length)];
        }

        return row;
    }

    public static void printRow(String[] row) {
        System.out.println("***************");
        System.out.println(" " + String.join(" | ", row));
        System.out.println("***************");
    }

    public static int getPayout(String[] row, int bet) {

        if (row[0].equals(row[1]) && row[1].equals(row[2])) {

            switch (row[0]) {
                case "F":
                    return bet * 2;
                case "E":
                    return bet * 3;
                case "B":
                    return bet * 5;
                case "A":
                    return bet * 10;
                case "S":
                    return bet * 20;
                default:
                    return 0;
            }

        }

        else if (row[0].equals(row[1])) {

            switch (row[0]) {
                case "F":
                    return bet * 1;
                case "E":
                    return bet * 2;
                case "B":
                    return bet * 4;
                case "A":
                    return bet * 5;
                case "S":
                    return bet * 10;
                default:
                    return 0;
            }

        }

        else if (row[1].equals(row[2])) {

            switch (row[1]) {
                case "F":
                    return bet * 1;
                case "E":
                    return bet * 2;
                case "B":
                    return bet * 4;
                case "A":
                    return bet * 5;
                case "S":
                    return bet * 10;
                default:
                    return 0;
            }

        }

        return 0;
    }

}
