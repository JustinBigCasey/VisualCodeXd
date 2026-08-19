import java.util.Scanner;

public class compao
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);

        double principal, rate, amount;
        int timesCompounded, years;

        System.out.print("Enter the principal amount: $");
        principal = scan.nextDouble();

        System.out.print("Enter the interest rate (%): ");
        rate = scan.nextDouble() / 100;

        System.out.print("Enter the # of times compounded per years: ");
        timesCompounded = scan.nextInt();

        System.out.print("Enter the # of years: ");
        years = scan.nextInt();

        amount = principal * Math.pow(1 + rate / timesCompounded, timesCompounded * years);
        System.out.printf("The amount after %d years is $%.2f", years, amount);


        scan.close();
    }
}