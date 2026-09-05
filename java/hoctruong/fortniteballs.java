import java.util.Scanner;

public class fortniteballs {

    static Scanner scan = new Scanner(System.in);


    static void func(int[] a){

        for(int i = 0; i < a.length; i++)
        {
            System.out.printf("Enter arr[%d]: ", i);
            a[i] = scan.nextInt();
        }
        
        System.out.println();

    }

    public static void main(String[] args)
    {
        int[] a = new int[5];

        func(a);

        int[] b = a.clone();

        a[0] = 10;
        
        for(int niga : b)
            System.out.println(niga);


        System.out.println();


        for(int niga : a)
            System.out.println(niga);
    }
}
