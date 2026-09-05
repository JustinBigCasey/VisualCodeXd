public class Exercise12{

    public static void main(String[] args) {
        
        int n = 654321;

        System.out.println(reverse(n));

    }

    public static int reverse(int n) {

        int reverse = 0;

        while (n != 0){

            reverse = 10 * reverse + n % 10;
            
            n /= 10;
        }

        return reverse;


    }

}