import java.util.Random;

public class randum
{
    public static void main(String[] args)
    {
        Random randum = new Random();
        
        double gay1;
        int gay2;
        boolean gay3;

        gay1 = randum.nextDouble(1, 1000);
        gay2 = randum.nextInt(1, 1000);
        gay3 = randum.nextBoolean();

        System.out.println(gay1);
        System.out.println(gay2);
        System.out.println(gay3);
    }
}