
import java.util.Scanner;

public class bannuocpro {

    static Scanner scan = new Scanner(System.in);

    public static void main(String[] args) {

        double money = 100, balance = 100, temp = 0;
        double pepsi = 6.0, coca = 5.55, sprite = 10.0, drpep = 20, snack = 50;
        boolean run = true;
        boolean machine = true;
        boolean bank = false;
        int choice1, choice2;
        String confirm;

        while (run) {
            while (machine) {
                displayMachine();
                System.out.print("Enter choice: ");
                choice1 = scan.nextInt();

                switch (choice1) {
                    case 1: {
                        System.out.print("Price Pepsi is $6.00, Confirm buy (y/n): ");
                        confirm = scan.next();

                        if (confirm.toLowerCase().equals("y")) {
                            if (money >= pepsi) {
                                money -= pepsi;
                            } else {
                                System.out.println("You don't have enough money. Please go to the bank niga");
                            }
                        } else {
                            System.out.println("You did not confirm the purchase");
                        }

                        System.out.printf("Exchange: %.2f", money);
                        break;
                    }

                    case 2: {
                        System.out.print("Price Cocacola is $5.55, Confirm buy (y/n): ");
                        confirm = scan.next();

                        if (confirm.toLowerCase().equals("y")) {
                            if (money >= coca) {
                                money -= coca;
                            } else {
                                System.out.println("You don't have enough money. Please go to the bank niga");
                            }
                        } else {
                            System.out.println("You did not confirm the purchase");
                        }

                        System.out.printf("Exchange: %.2f", money);
                        break;
                    }

                    case 3: {
                        System.out.print("Price Sprite is $10.00, Confirm buy (y/n): ");
                        confirm = scan.next();

                        if (confirm.toLowerCase().equals("y")) {
                            if (money >= sprite) {
                                money -= sprite;
                            } else {
                                System.out.println("You don't have enough money. Please go to the bank niga");
                            }
                        } else {
                            System.out.println("You did not confirm the purchase");
                        }

                        System.out.printf("Exchange: %.2f", money);
                        break;
                    }

                    case 4: {
                        System.out.print("Price Dr.Pepper is $20.00, Confirm buy (y/n): ");
                        confirm = scan.next();

                        if (confirm.toLowerCase().equals("y")) {
                            if (money >= drpep) {
                                money -= drpep;
                            } else {
                                System.out.println("You don't have enough money. Please go to the bank niga");
                            }
                        } else {
                            System.out.println("You did not confirm the purchase");
                        }

                        System.out.printf("Exchange: %.2f", money);
                        break;
                    }

                    case 5: {
                        System.out.print("Price Snack is $50.00, Confirm buy (y/n): ");
                        confirm = scan.next();

                        if (confirm.toLowerCase().equals("y")) {
                            if (money >= snack) {
                                money -= snack;
                            } else {
                                System.out.println("You don't have enough money. Please go to the bank niga");
                            }
                        } else {
                            System.out.println("You did not confirm the purchase");
                        }

                        System.out.printf("Exchange: %.2f", money);
                        break;
                    }

                    case 6: {
                        System.out.println("Your money: " + money);
                        break;
                    }

                    case 7: {
                        System.out.println("GOODEBYE");
                        run = false;
                        machine = false;
                        bank = false;
                        break;
                    }

                    case 8: {
                        bank = true;
                        machine = false;
                        break;
                    }
                }

            }

            while (bank) {
                displayBank();
                System.out.print("Enter choice: ");
                choice2 = scan.nextInt();

                switch (choice2) {
                    case 1: {
                        temp = deposit(money);
                        money -= temp;
                        balance += temp;
                        break;
                    }

                    case 2: {
                        temp = withdraw(balance);
                        money += temp;
                        balance -= temp;
                        break;
                    }

                    case 3: {
                        showBalance(balance);
                        break;
                    }

                    case 4: {
                        displayBank();
                        break;
                    }

                    case 5: {
                        System.out.println("BAI BAI NIGa");
                        bank = false;
                        machine = true;
                        break;
                    }
                }
            }
        }

    }

    public static void displayMachine() {
        System.out.println("\n=================");
        System.out.println("Vending Machine");
        System.out.println("=================");
        System.out.println("1. Pepsi");
        System.out.println("2. Cocacola");
        System.out.println("3. Sprite");
        System.out.println("4. Dr Peper");
        System.out.println("5. Snack");
        System.out.println("6. Show money");
        System.out.println("7. Exit");
        System.out.println("8. Bank");
    }

    public static void displayBank() {
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

    static double deposit(double money) {
        double amount;

        System.out.print("Enter an amount to be deposited: $");
        amount = scan.nextDouble();

        if (amount < 0) {
            System.out.println("Amount cannot be negative");
            return 0;
        } else if (amount > money) {
            System.out.println("Amount cannot be more than your money");
            return 0;
        } else {
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
        } else if (amount > balance) {
            System.out.println("Amount cannot be more than your balance");
            return 0;
        } else {
            return amount;
        }
    }

}
