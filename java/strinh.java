import java.util.Scanner;

public class strinh
{
    public static void main(String[] args) 
    {
        Scanner scan = new Scanner(System.in);

        String gay = "   Fortnite balls   ";
        String email;
        int dickSucked;

        while (true) 
        {
            System.out.print("Enter your email: ");
            email = scan.nextLine(); 
            
            if(email.contains("@"))
                break;
            else
                System.out.println("\n Email must contain @ !\n");
            
        }

        System.out.print("Enter how many dick you have sucked: ");
        dickSucked = scan.nextInt();

        String gayDetected = (dickSucked >= 10) ? "GAY" : "NOT GAY";


        String username = email.substring(0, email.indexOf("@"));
        String domain = email.substring(email.indexOf("@") + 1);

        int length = gay.length();
        char letter = gay.charAt(1);
        int index = gay.indexOf("i");
        int lastIndex = gay.lastIndexOf("l");

        gay = gay.toUpperCase();
        gay = gay.toLowerCase();
        gay = gay.trim();
        gay = gay.replace(" ", " fuck you ");

        // System.out.println(gay);
        // System.out.println(gay.isEmpty());
        // System.out.println(gay.contains("balls"));
        // System.out.println(gay.equals("niga1"));
        // System.out.println(gay.equalsIgnoreCase("niga1"));

        System.out.println("Your user name: " + username);
        System.out.println("Your domain: " + domain);
        System.out.println(gayDetected);

        scan.close();

    }
}