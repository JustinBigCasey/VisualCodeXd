import java.util.Scanner;

public class Exercise9 {

    static Scanner scan = new Scanner(System.in);

    public static void main(String[] args) {

        System.out.print("Enter n: ");
        int n = scan.nextInt();

        hailstone(n);

    }   

    public static void hailstone(int n) {

        int se = n;

        while(se != 1) {
        
            if (n % 2 == 0){
                System.out.printf("\n%d is even, so that we take n/2: %d", se, n);
                se = n;
                n = n / 2;
            }

            else {
                System.out.printf("\n%d is odd, so that we take 3*n+1: %d", se, n);
                se = n;
                n = 3*n+1;
            }
        }

    }

}
