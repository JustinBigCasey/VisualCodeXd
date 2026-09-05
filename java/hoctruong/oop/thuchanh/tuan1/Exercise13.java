public class Exercise13 {

    public static void main(String[] args) {
        
        int n = 5143415;

        if(isPalidrome(n))
            System.out.printf("%d is a palidrome number", n);
        else
            System.out.printf("%d is NOT a palidrome number", n);

    }


    public static boolean isPalidrome(int n) {

        int temp = n;
        int reverse = 0;

        while(n != 0) {
            
            reverse = reverse * 10 + n % 10;

            n /= 10;
        }

        if(reverse == temp)
            return true;
        else
            return false;


    }



}