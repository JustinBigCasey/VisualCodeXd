public class Exercise6 {
    
    public static void main(String[] args){
        int a = 33, b = 5, c = 78;

        System.out.printf("The minimum number in a = %d b = %d c = %d is: %d", a, b, c, minimum(a, b, c));

    }

    public static int minimum(int a, int b, int c) {
        int mini = Math.min(a, b);
        return Math.min(mini, c);
    }
}
