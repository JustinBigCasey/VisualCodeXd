

public class Exercise5 
{
    public static void main(String[] args)
    {
        triangle(3);
        System.out.println();
        triangle(5);
        System.out.println();
        triangle(7);
    }   

    static void triangle(int n)
    {
        int i, j;

        for(i = 1; i <= n; i+=2)
        {
            for(j = 1; j <= i; j++)
            {
                System.out.print("*");
            }
            System.out.println();
        }

        for(i = n - 2; i >= 1; i -=2)
        {
            for(j = 1; j <= i; j++)
            {
                System.out.print("*");
            }
            System.out.println();
        }
    }
}
