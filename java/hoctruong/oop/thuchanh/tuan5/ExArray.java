
import java.util.Scanner;

public class ExArray {

    static Scanner scan = new Scanner(System.in);

    public static void main(String[] args) {

        System.out.print("Enter n: ");
        int n = scan.nextInt();

        int[] a = input(n);

        for (int i = 0; i < a.length; i++) {
            System.out.printf("%d ", a[i]);
        }
        System.out.println();

        System.out.println("Max Even: " + maxEven(a));
        System.out.println("Min Odd: " + minOdd(a));
        System.out.println("Sum MEMO: " + sumMEMO(a));
        System.out.println("Sum Even: " + sumEven(a));
        System.out.println("Product Odd: " + prodOdd(a));
        System.out.println("Index First Even: " + idxFirstEven(a));
        System.out.println("Index Last Odd: " + idxLastOdd(a));

        scan.close();

    }

    public static int maxEven(int[] a) {

        int maxEven = 0;
        int index = -1;

        for (int i = 0; i < a.length; i++) {
            if (a[i] % 2 == 0) {
                if (index == -1 || a[i] > maxEven) {
                    maxEven = a[i];
                    index = i;
                }
            }
        }

        return maxEven;

    }

    public static int minOdd(int[] a) {

        int minOdd = 0;

        for (int i = 0; i < a.length; i++) {
            if (a[i] % 2 != 0) {

                if (minOdd == 0 || a[i] < minOdd) {
                    minOdd = a[i];
                }
            }
        }

        return minOdd;

    }

    public static int sumMEMO(int[] a) {

        int maxEven = maxEven(a);
        int minOdd = minOdd(a);

        return maxEven + minOdd;

    }

    public static int sumEven(int[] a) {

        int sum = 0;

        for (int i = 0; i < a.length; i++) {

            if (a[i] % 2 == 0) {
                sum += a[i];
            }

        }

        return sum;

    }

    public static int prodOdd(int[] a) {

        int prod = 1;

        for (int i = 0; i < a.length; i++) {

            if (a[i] % 2 != 0) {
                prod *= a[i];
            }
        }

        return prod;

    }

    public static int idxFirstEven(int[] a) {

        for (int i = 0; i < a.length; i++) {

            if (a[i] % 2 == 0) {
                return i;
            }
        }

        return -1;

    }

    public static int idxLastOdd(int[] a) {

        for (int i = a.length - 1; i >= 0; i--) {

            if (a[i] % 2 != 0) {
                return i;
            }
        }

        return -1;

    }

    public static int[] input(int n) {

        int[] result = new int[n];

        for (int i = 0; i < n; i++) {
            System.out.printf("Enter num #%d: ", i);
            result[i] = scan.nextInt();

        }

        return result;

    }

}
