import java.util.*;


public interface shopin 
{
    public static void main(String[] args) 
    {
        String name;
        String[] item = new String[100];
        int[] quantity = new int[100];
        int variable_item = 0;
        double[] price = new double[100];
        double total = 0.0;
        char symbol = '$';

        
        System.out.println("====== Welcome to ShopIn! ======");

        Scanner sc = new Scanner(System.in);
        
        System.out.print("Enter your name: ");
        name = sc.nextLine();

        System.out.printf("\n Welcome %s!\n\n", name);

        // INPUT VALIDATION FOR NUMBER OF DIFFERENT ITEMS
        while (true) 
            {
                try
                {
                    System.out.print("How many different items would you like to purchase?: ");
                    variable_item = sc.nextInt();
                    sc.nextLine();

                    if (variable_item <= 0) 
                    {
                        System.out.println("\n / Please enter a positive number / \n");
                        continue;
                    }
                    break;
                
                }

                catch (InputMismatchException e) 
                {
                    System.out.println("\n / Invalid input. Please enter a valid number. / \n");
                    sc.nextLine(); 
                }
            
            }   
        
        // LOOP TO GET ITEM NAMES
        for (int i = 0; i < variable_item; i++)
            {
                // INPUT VALIDATION FOR ITEM NAMES
                System.out.printf("Enter the name of item #%d: ", i + 1);
                item[i] = sc.nextLine();
                
                // INPUT VALIDATION FOR ITEM QUANTITY
                while (true) 
                    {
                        try
                        {
                            System.out.printf("How many %s would you like to buy?: ", item[i]);
                            quantity[i] = sc.nextInt();
                            sc.nextLine();

                            if (quantity[i] <= 0) 
                            {
                                System.out.println("\n / Please enter a positive number / \n");
                                continue;
                            }
                            break;
                        
                        }

                        catch (InputMismatchException e) 
                        {
                            System.out.println("\n / Invalid input. Please enter a valid number. / \n");
                            sc.nextLine(); 
                        }
                        
                    }

                // INPUT VALIDATION FOR ITEM PRICE
                while (true) 
                    {
                        try
                        {
                            System.out.printf("How much does each %s cost?: $", item[i]);
                            price[i] = sc.nextDouble();
                            sc.nextLine();
                            
                            total += quantity[i] * price[i];
                            System.out.printf("\nYou have added %d [%s] to your cart\nTotal: %c%.2f (+$%.2f)\n\n", quantity[i], item[i], symbol, total, price[i] * quantity[i]);


                            if (price[i] <= 0) 
                            {
                                System.out.println("\n / Please enter a positive number / \n");
                                continue;
                            }
                            break;
                        
                        }

                        catch (InputMismatchException e) 
                        {
                            System.out.println("\n / Invalid input. Please enter a valid number. / \n");
                            sc.nextLine(); 
                        }
                        
                    }
            }


         // SHOPPING SUMMARY

        System.out.print("     =========== SHOPPING SUMMARY ===========\n");
        System.out.print("--------------------------------------------------\n");
        System.out.printf("%-5s %-20s %-10s %-10s %-10s\n", "No.", "Item", "Price", "Quantity", "Total");

        for (int i = 0; i < variable_item; i++)
        {
            System.out.printf("%-5d %-20s %c%-12.2f %-8d %c%-10.2f\n", i + 1, item[i], symbol, price[i], quantity[i], symbol, price[i] * quantity[i]);
        }
        System.out.print("--------------------------------------------------\n");
        System.out.printf("Grand Total: %c%-10.2f\n", symbol, total);
        System.out.print("=========================================\n");
        System.out.printf("\nTHANK YOU FOR SHOPPING WITH US %s!\n", name);
        

        sc.close();

    }
}
