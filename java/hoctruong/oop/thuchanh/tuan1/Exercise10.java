
public class Exercise10 {
    
    public static void main (String[] args) {

        int n = 1234567;

        System.out.println(sumFirstLast(n));

    }

    public static int sumFirstLast(int n){

        int first, last;

        last = n % 10;

        while(n > 10)
            n /= 10;
        
        first = n;

        return first + last;

    } 

}