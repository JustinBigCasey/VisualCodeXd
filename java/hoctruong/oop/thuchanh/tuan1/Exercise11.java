public class Exercise11 {
    
    public static void main(String[] args) {

        int n = 3412224;


        System.out.println(countDigit(n));

    }

    public static int countDigit(int n) {

        int count = 0;

        while(n != 0) {
            n /= 10;
            count++;
        }

        return count;
    }

}