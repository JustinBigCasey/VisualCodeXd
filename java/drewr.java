import java.util.Scanner;


public class drewr
{
    public static void main(String[] args)
    {
        int row, column;
        int r = 0, c = 0;

        Scanner scan = new Scanner(System.in);

        // setup 
        while (true)
        {
            System.out.print("Enter how many row (1 - 7): ");
            r = scan.nextInt();

            if (r > 0 && r <= 7)
                break;
            else
                System.out.println("Please enter in 1 - 7");
        }

        while(true)
        {
            System.out.print("Enter how many column (1 - 15): ");
            c = scan.nextInt();

            if (c > 0 && c <= 15)
                break;
            else
                System.out.println("Please enter in 1 - 15");
        }

        // create 2d array
        int[][] B = new int[r][c];


        // main gem
        while (true)  
        {

            // print aray
            for (int i = 0; i < r; i++)
            {   
                for (int j = 0; j < c; j++)    
                {
                    if (B[i][j] == 1)
                        System.out.print(" O  ");
                    else
                        System.out.print("[ ] ");
                }

                System.out.print("\n");
            }
            
            // row
            while (true)
            {
                System.out.print("Enter row: ");
                row = scan.nextInt();
                
                if (row <= r && row >= 0)
                    break;
                else
                    System.out.printf("Please enter in 1 - %d\n", r);

            }

            // colum
            while (true) 
            { 
                System.out.print("Enter column: ");
                column = scan.nextInt();

                if (column <= c && column >= 0)
                    break;
                else
                    System.out.printf("Please enter in 1 - %d\n", c);
            }

            B[row - 1][column - 1] = 1;
        }


    }
}