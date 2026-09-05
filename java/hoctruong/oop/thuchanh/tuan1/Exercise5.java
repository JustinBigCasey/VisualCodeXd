public class Exercise5 {
    
    public static void main(String[] args) {

        int year = 2000;

        if (leapYear(year))
            System.out.printf("%d is a leap year", year);
        else
            System.out.printf("%d is NOT a leap year", year);

    }

    public static boolean leapYear(int year) {

        if(year % 4 == 0)
            return true;
        if(year % 100 == 0 && year % 400 == 0)
            return true;
        else
            return false;

    }

}
