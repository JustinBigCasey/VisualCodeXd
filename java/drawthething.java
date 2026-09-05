import java.util.Scanner;

public class drawthething {

    public static void main(String[] args) throws InterruptedException {

        Scanner scan = new Scanner(System.in);

        int size, i, j;

        System.out.print("Enter size: ");
        size = scan.nextInt();


        for(i = 1; i <= size; i+=2) {
            Thread.sleep(500);
            for (j = 0; j < i; j++)
                System.out.print("*");

            System.out.println();
        }

        for(i = 0; i < size; i+=2) {
            Thread.sleep(500);
            for (j = i + 2; j < size; j++)
                System.out.print("*");

            System.out.println();
        }
    

    }
}