import java.util.Scanner;

public class Exercise3 {

    static Scanner scan = new Scanner(System.in);

    public static void main(String[] args){

        int a = 43, b = 11;

        System.out.printf("The remaining division of %d/%d is: %d", a, b, remainDivi(a, b));

    }

    public static int remainDivi(int a, int b){ 
        return a % b;
    }


}
