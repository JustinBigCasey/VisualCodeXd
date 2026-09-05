import java.util.InputMismatchException;
import java.util.Scanner;

public class Exercise4 
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);

        double depositAmount = 0;
        int month = 0;

        while (true)
        {
            try 
            {
                System.out.print("Enter deposit amount: $");
                depositAmount = scan.nextDouble();
                scan.nextLine();

                if(depositAmount <= 0)
                {
                    System.out.println("\nPlease enter a positive number\n");
                    continue;
                }
                break;

            } 

            catch (InputMismatchException e) 
            {
                System.out.println("\nIncorrect input\n");
                scan.nextLine();
            }

        }

        while (true)
        {
            try 
            {
                System.out.print("Enter month: ");
                month = scan.nextInt();
                scan.nextLine();

                if(month <= 0 || month > 12)
                {
                    System.out.println("\nPlease enter in 1 - 12 months\n");
                    continue;
                }
                break;

            } 
            
            catch (InputMismatchException e) 
            {
                System.out.println("\nIncorrect input\n");
                scan.nextLine();
            }

        }

        System.out.printf("\nThe amount recieved after deposist $%.2f for %d months = $%.2f", depositAmount, month, interest(depositAmount, month));

    }    

    static double interest(double depositAmout, int month)
    {

        if(month <= 3)
            return depositAmout + depositAmout * 0.01;
        
        else if(month <= 6)
            return depositAmout + depositAmout * 0.015;

        else if(month < 12)
            return depositAmout + depositAmout * 0.03;

        else 
            return depositAmout + depositAmout * 0.05;

    }
}

