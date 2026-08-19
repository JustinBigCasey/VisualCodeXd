import java.util.Scanner;


public class niga1 {
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);

        double temp, newTemp;
        String unit, sign;

        System.out.print("Enter the temperature: ");
        temp = scan.nextDouble();

        System.out.print("Convert to Celsius or Fahrenheit? (C / F): ");
        unit = scan.next().toUpperCase();

        newTemp = (unit.equals("C")) ? ((5.0 / 9.0) * (temp - 32)) : ((temp * 9.0 / 5.0) + 32);
        sign = (unit.equals("F")) ? "C" : "F";

        System.out.printf("%.2f°%s = %.2f°%s", temp, unit, newTemp, sign);

        scan.close();
 
    }

}