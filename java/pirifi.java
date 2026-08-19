import java.util.InputMismatchException;
import java.util.Random;
import java.util.Scanner;

public class pirifi
{
    public static void main(String[] args)
    {
        Random random = new Random();

        Scanner scan = new Scanner(System.in);

        String name;
        char firstLetter;
        int age, wifegay;
        double height;
        boolean wife;
        int randum1 = random.nextInt(1, 500);
        double randum2 = random.nextDouble(1, 100);

        System.out.print("Enter name: ");
        name = scan.nextLine();
        
        firstLetter = name.charAt(0);

        age = checkInt(scan, "Enter age: ");

        height = checkDouble(scan, "Enter height (m): ");

        wife = checkBoolean(scan, "Wife (true/false): ");

        if(wife == true)
            wifegay = 1;
        else
            wifegay = 0;

        System.out.printf("\n Your id is %d%.2f%c%d", age/2 + randum1, height + randum2, firstLetter, wifegay);
        
        scan.close();
    }


    static int checkInt(Scanner scan, String n)
    {
        while(true)
        {
            try
            {
                System.out.print(n);
                return Integer.parseInt(scan.nextLine());
            }

            catch(InputMismatchException e)
            {
                System.out.println("Invalid integer! Please enter a valid integer!");
            }
        }
    }

    static double checkDouble(Scanner scan, String n)
    {
        while(true)
        {
            try
            {
                System.out.print(n);
                return Double.parseDouble(scan.nextLine());
            }

            catch(InputMismatchException e)
            {
                System.out.println("Invalid input! Please enter a valid number!");
            }
        }
    }

    static boolean checkBoolean(Scanner scan, String n)
    {
        while(true)
        {
            
            System.out.print(n);
            String input = scan.nextLine();

            if (input.equalsIgnoreCase("true"))
                return true;

            if (input.equalsIgnoreCase("false"))
                return false;
        
            else
                System.out.println("Invalid input! Please enter (true/false)!");
            
        }
    }
}