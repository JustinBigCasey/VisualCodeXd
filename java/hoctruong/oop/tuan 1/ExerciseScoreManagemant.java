import java.util.Scanner;

public class ExerciseScoreManagemant
{
    public static void main(String[] args) 
    {
        Scanner scan = new Scanner(System.in);
        
        double math = 0, literature = 0, english = 0;
        double avg = 0;

        System.out.print("Enter Math score: ");
        math = scan.nextDouble();

        System.out.print("Enter Literature score: ");
        literature = scan.nextDouble();

        System.out.print("Enter English score: ");
        english = scan.nextDouble();

        avg = average(math, literature, english);

        System.out.printf("Your average score = %.2f\n", avg);

        System.out.printf("Your rank is %c", ranki(avg));

    }

    static double average(double math, double literature, double english)
    {
        return (math * 2 + literature + english) / 4;
    }

    static char ranki(double average)
    {
        if(average >= 8.0)
            return 'A';

        else if(average >= 5 && average < 8)
            return 'B';

        else
            return 'C';
    }
}