public class Exercise3 
{
    public static void main(String[] args)
    {
        System.out.println(reverse(12345));
        System.err.println(reverse(987654321));
    }

    static int reverse(int n)
    {
        int reverse = 0;

        while (n > 0)
        {
            reverse = reverse * 10 + n % 10;
            n /= 10;
        }

        return reverse;
    }

}
