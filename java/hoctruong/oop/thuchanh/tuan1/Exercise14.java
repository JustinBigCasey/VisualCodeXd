import java.util.Scanner;

public class Exercise14 {

    static Scanner scan = new Scanner(System.in);

    public static void main(String[] args) {

        int choice;
        double money;
        double coca = 2.55, pepsi = 2.65, sprite = 3.00, snack = 4.00;
        boolean isRun = true;

        while(isRun) {

            printMenu();
            System.out.print("PLease enter the number: ");
            choice = scan.nextInt();


            switch(choice) {
                case 1: {
                    System.out.print("The price of Coca is: 2.55$, please enter the amount of money: $");
                    money = scan.nextDouble();
                    
                    checkBuy(money, coca);

                    break;
                }

                case 2: {
                    System.out.print("The price of Pepsi is: 2.65$, please enter the amount of money: $");
                    money = scan.nextDouble();
                    
                    checkBuy(money, pepsi);
                    
                    break;
                }

                case 3: {
                    System.out.print("The price of Sprite is: 3.00$, please enter the amount of money: $");
                    money = scan.nextDouble();
                    
                    checkBuy(money, sprite);
                    
                    break;
                }

                case 4: {
                    System.out.print("The price of Snack is: 4.00$, please enter the amount of money: $");
                    money = scan.nextDouble();
                    
                    checkBuy(money, snack);
                    
                    break;
                }

                case 5: {
                    System.out.println("Goodbye baibai");
                    isRun = false;
                    break;
                }

                default: {
                    System.out.println("Please enter a valid number");
                    break;
                }
            }


        }
    }


    public static void printMenu() {

        System.out.println("==== MENU ====");
        System.out.println("1. Cocacula");
        System.out.println("2. Pepsiu");
        System.out.println("3. Sprite");
        System.out.println("4. Snake");
        System.out.println("5. Shutdow Machine");

    }

    public static double checkMoney(double money, double price) {

        if (money < price)
            return -1;
        else
            return money - price;

    }

    public static void checkBuy(double money, double price) {

        if (checkMoney(money, price) != -1)
            System.out.printf("Your change is %.2f$\n", checkMoney(money, price));
        else 
            System.out.println("Not enough money to buy this item. Please select again");

    }

}