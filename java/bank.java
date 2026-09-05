import java.util.Scanner;

public class bank {

    static Scanner scan = new Scanner(System.in);

    public static void main(String[] args) {


        double balance = 0;
        boolean isRunning = true;
        int choice;


        display();

        while (isRunning) {
            

            System.out.print("Enter your choice (1 - 5): ");
            choice = scan.nextInt();

            switch(choice) {
                case 1 -> balance += deposit();
                case 2 -> balance -= withdraw(balance);
                case 3 -> showBalance(balance);
                case 4 -> display();
                case 5 -> isRunning = false;
                default -> System.out.println("\n ! INVALID CHOICE !\n");
            }

        }

        System.out.println("THANK YOU, HAVE A NICE DAY !");

        scan.close();

    }

    static void display() {
        System.out.println("=================");
        System.out.println(" BANKING SCAMINH");
        System.out.println("=================");
        System.out.println("1. Deposit");
        System.out.println("2. Withdraw");
        System.out.println("3. Show Balance");
        System.out.println("4. Show choice");
        System.out.println("5. Exit");
        System.out.println("---------------------");

    }

    static void showBalance(double balance) {
        System.out.printf("TOTAL BALANCE: $%.2f\n\n", balance);
    }

    static double deposit() {
        double amount;

        System.out.print("Enter an amount to be deposited: $");
        amount = scan.nextDouble();

        if (amount < 0) {
            System.out.println("Amount cannot be negative");
            return 0;
        }
        else {
            return amount;
        }
    }

    static double withdraw(double balance) {
        double amount;

        System.out.print("Enter an amount to withdraw: ");
        amount = scan.nextDouble();

        if (amount < 0) {
            System.out.println("Amount cannot be negative");
            return 0;
        }

        else if (amount > balance){
            System.out.println("Amount cannot be more than your balance");
            return 0;
        }

        else {
            return amount;
        }
    }


}