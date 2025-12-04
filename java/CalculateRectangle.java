import java.util.Scanner;


public class CalculateRectangle
{
    public static void main(String[] args)
    {
        
        double width = 0;
        double height = 0;
        double area = 0;


        System.out.println("==== CALCULATE AREA OF A RECTANGLE ===\n");


        Scanner scan = new Scanner(System.in);

        System.out.print("Enter the Width: ");
        width = scan.nextDouble();

        System.out.print("Enter the Height: ");
        height = scan.nextDouble();

        area = width * height;

        System.out.println("The Area is: "+ area);

        scan.close();


    }

}