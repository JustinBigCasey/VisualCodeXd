public class Exercise2 
{
    public static void main(String[] args)
    {
        System.out.println(checkEven(3));
        System.out.println(checkEven(222));
    }    

    static boolean checkEven(int n)
    {
        if (n % 2 == 0)
            return true;
        else
            return false;
    }
}


