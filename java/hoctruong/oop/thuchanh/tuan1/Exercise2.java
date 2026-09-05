import java.util.Scanner;

public class Exercise2 {

    static Scanner scan = new Scanner(System.in);

    public static void main(String[] args){
        
        double area, base, height;

        System.out.print("Enter base: ");
        base = scan.nextDouble();
        

        System.out.print("Enter height: ");
        height = scan.nextDouble();

        area = 1.0/2.0 * base * height;
        System.out.printf("Area of the triangle: %.2fcm", area);

    }
}
