
public class Exercise4 {

    public static void main(String[] args) {

        double cel = 100.6, fah = 212.6;

        System.out.printf("%.2fC = %.2fF", cel, toFah(cel));
        System.out.printf("\n%.2fF = %.2fC", fah, toCel(fah));
        
    }

    public static double toFah(double cel){
        return (cel * 1.8) + 32;
    }

    public static double toCel(double fah){
        return (fah - 32) / 1.8;
    }


}
