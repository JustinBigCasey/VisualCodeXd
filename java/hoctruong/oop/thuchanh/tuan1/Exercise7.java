public class Exercise7 {
    

    public static void main(String[] args) {
        
        char a = 'C';

        if(isAlphanumeric(a))
            System.out.printf("%c is a Alphanumeric", a);
        else
            System.out.printf("%c is NOT a Alphanumeric", a);
    }

    public static boolean isAlphanumeric(char a){
        if((a >= 48 && a <= 57) || (a >= 65 && a <= 90) ||(a >= 97 && a <= 122))
            return true;

        return false;
    }
}
