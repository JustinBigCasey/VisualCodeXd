import java.util.Scanner;

public class casee
{
    public static void main(String[] args) 
    {
        Scanner scan = new Scanner(System.in);
        
        String day;

        System.out.print("Enter day of the week: ");
        day = scan.nextLine().toUpperCase();

        switch(day)
        {
            case "MONDAY", "TUESDAY", "WEDNESDAY", "THURSDAY", "FRIDAY" -> System.out.println("gay balls");
            case "SATURDAY", "SUNDAY" -> System.out.println("FOR FREE?!?!?");
            default -> System.out.println(day + " is not a day");
        }

        scan.close();
    }
}