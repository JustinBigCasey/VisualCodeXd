import java.util.Scanner;

public class mathe
{
    public static void main(String[] args) {
        {
            Scanner scan = new Scanner(System.in);

            double a, b, c;

            System.out.print("Enter the length of size A: ");
            a = scan.nextDouble();

            System.out.print("Enter the length of size B: ");
            b = scan.nextDouble();

            c = Math.sqrt(Math.pow(a, 2) + Math.pow(b,2));
            System.out.printf("The hypotenuse (side c) is: %.2f cm", c);

            scan.close();
        }
    }
}