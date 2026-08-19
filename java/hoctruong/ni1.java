import java.util.Scanner;

public class ni1
{
    public static void main(String[] args)
    {   
        String gay;

        Scanner scan = new Scanner(System.in);

        while(true)
        {
            System.out.print("Is you gay? (Yes/No): ");
            gay = scan.nextLine();

            if(gay.equalsIgnoreCase("yes"))
            {
                System.out.println("oh nigga you gay");
                break;
            }

            else if(gay.toLowerCase().equals("no"))
            {
                System.out.println("kys");
                break;
            }

            else
                System.out.println("lol no");

        }

        scan.close();
    }
}