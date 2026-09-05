public class Exercise8 {
    
    public static void main(String[] args) {
        
        int n = 12;

        System.out.println("n = " + n);
        System.out.println("a = " + s1(n));
        System.out.println("b = " + s2(n));
        System.out.println("c = " + s3(n));
        System.out.println("d = " + s4(n));
        System.out.println("e = " + s5(n));
        
    }

    public static int s1(int n) {

        int sum = 0;

        for(int i = 0; i < n; i++)
            sum += i;
        
        return sum;
    }

    public static int s2(int n){

        int sum = 1;

        for(int i = 1; i <= n; i++)
            sum *= i;
        
        return sum;

    }

    public static int s3(int n){

        int sum = 0;

        for(int i = 0; i < n; i++)
            sum += Math.pow(2, i);
        
        return sum;

    }

    public static double s4(int n){

        double sum = 0;

        for(int i = 1; i <= n; i++)
            sum += 1/(i*2.0);
        
        return sum;

    }

    public static int s5(int n){

        int sum = 0;

        for(int i = 0; i < n; i++)
            sum += Math.pow(i, 2);
        
        return sum;

    }

}
