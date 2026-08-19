import java.util.Random;
import java.util.Scanner;

public class minersweper 
{
    static final int SIZE = 8;
    static final int PLAY_MIN = 0;
    static final int PLAY_MAX = SIZE;
    static final int BOMBCOUNT = 8;
    static final int BOMB = 11;

    public static void main(String[] args) 
    {
        Scanner scan = new Scanner(System.in);
        Random random = new Random();

        int[][] board = new int[SIZE][SIZE];
        boolean[][] opened = new boolean[SIZE][SIZE];
        boolean[][] flagged = new boolean[SIZE][SIZE];

        int i, j, k, l;
        int bombCount = 0;
        int turn = 0;
        boolean gaming = true;

        // make bom
        while (bombCount < BOMBCOUNT) 
        {
            int row = random.nextInt(PLAY_MIN + 1, PLAY_MAX - 1);
            int column = random.nextInt(PLAY_MIN + 1, PLAY_MAX - 1);

            if(board[row][column] != BOMB)
            {
                board[row][column] = BOMB;
                bombCount++;
            }
        }

        // setup tiles
        for (i = PLAY_MIN + 1; i < PLAY_MAX - 1; i++) 
        {
            for (j = PLAY_MIN + 1; j < PLAY_MAX - 1; j++) 
            {

                if(board[i][j] != BOMB) 
                {

                    int count = 0;

                    for (k = i - 1; k <= i + 1; k++)
                    {
                        for(l = j - 1; l <= j + 1; l++)
                        {
                            if(k == i && l == j)
                                continue;

                            if(board[k][l] == BOMB)
                                count++;
                        }
                    } 

                    board[i][j] = count;
                }
            }
        }

        // main gem
        while (gaming) 
        {   
            int row = 0, col = 0;

            // print board
            printBoard(board, opened, flagged, false, false, row, col);

            // row chose
            while (true) 
            {
                System.out.print("Enter row: ");
                row = scan.nextInt();

                if (row > PLAY_MIN && row <= PLAY_MAX - 2)
                    break;
                else
                    System.out.printf("Please enter 1 - %d\n", PLAY_MAX - 2);

            }

            // colum chose
            while (true) 
            {
                System.out.print("Enter column: ");
                col = scan.nextInt();

                if (col > PLAY_MIN && col <= PLAY_MAX - 2)
                    break;
                else
                    System.out.printf("Please enter in 1 - %d\n", PLAY_MAX - 2);
            }

            printBoard(board, opened, flagged, false, true, row, col);
            
            // chose flag or swep
            int choice;

            while (true) 
            {
                System.out.print("Enter sweep (1) / flag (2) / refresh chose (3): ");
                choice = scan.nextInt();

                if(choice == 1 || choice == 2 || choice == 3)
                    break;
            }

            // sweep
            if(choice == 1)
            {
                if(flagged[row][col])
                    continue;

                if(board[row][col] == BOMB)
                {
                    for (i = PLAY_MIN + 1; i < PLAY_MAX - 1; i++) 
                    {
                        for (j = PLAY_MIN + 1; j < PLAY_MAX - 1; j++) 
                            opened[i][j] = true;
                    }

                    turn++;
                    printBoard(board, opened, flagged, true, false, row, col);
                    System.out.println("\n ! YOU LOSE ! \n");
                    System.out.printf("  [Turn: %d]", turn);
                    gaming = false;
                }

                else
                {
                    sweepZero(board, opened, row, col);
                    turn++;
                }
            }
            
            // flag
            else if(choice == 2)
            {
                if(!opened[row][col])
                {
                    flagged[row][col] = !flagged[row][col];
                    turn++;
                }
            }

            if(checkWin(opened))
            {
                gaming = false;
                printBoard(board, opened, flagged, true, false, row, col);
                System.out.println("\n \\\\ YOU WIN //\n");
                System.out.printf("  [Turn: %d]", turn);
            }
        }

        scan.close();
    }


    static void printBoard(int[][] board, boolean[][] openned, boolean[][] flagged, boolean revealBomb, boolean mark, int row, int col)
    {
        int i, j;

        for (i = PLAY_MIN; i < PLAY_MAX; i++) 
        {
            for (j = PLAY_MIN; j < PLAY_MAX; j++) 
            {
                // frame
                if(i == PLAY_MIN || i == PLAY_MAX - 1 || j == PLAY_MIN || j == PLAY_MAX - 1)
                {
                    // corner
                    if((i == PLAY_MIN || i == PLAY_MAX - 1) && (j == PLAY_MIN || j == PLAY_MAX - 1))
                        System.out.print("/#/ ");

                    // top
                    else if(i == PLAY_MIN)         
                        System.out.printf("/%d/ ", j);

                    // bot
                    else if(i == PLAY_MAX - 1)
                        System.out.printf("/%d/ ", j);
                    
                    // left
                    else if(j == PLAY_MIN)     
                        System.out.printf("/%d/ ", i);

                    // right
                    else if(j == PLAY_MAX - 1)
                        System.out.printf("/%d/ ", i);
                }

                // mark opened
                else if(mark && i == row && j == col && openned[i][j])
                    System.out.print(" X  ");

                // mark not opened
                else if(mark && i == row && j == col)
                    System.out.print("[X] ");

                // flag
                else if (flagged[i][j])
                    System.out.print("[!] ");

                // bom
                else if (board[i][j] == BOMB && revealBomb)
                    System.out.print("[@] ");

                // not open
                else if (!openned[i][j])
                    System.out.print("[ ] ");

                // clear
                else if (board[i][j] == 0)
                    System.out.print("    ");


                // frame count bom
                else 
                    System.out.printf(" %d  ", board[i][j]);
            }
            
            System.out.print("\n");

        }
    }

    static void sweepZero(int[][] board, boolean[][] opened, int row, int col)
    {
        int i, j;

        if(row < PLAY_MIN + 1 || row > PLAY_MAX - 2 || col < PLAY_MIN + 1 || col > PLAY_MAX - 2)
            return;

        if(opened[row][col])
            return;

        if(board[row][col] == BOMB)
            return;

        opened[row][col] = true;

        if(board[row][col] != 0)
            return;

        for(i = row - 1; i <= row + 1; i++)
        {
            for(j = col - 1; j <= col + 1; j++)
            {
                if(i == row && j == col)
                    continue;

                sweepZero(board, opened, i, j);
            }
        }
    }


    static boolean checkWin(boolean[][] opened)
    {
        int i, j, openedCount = 0;
        int playableTiles = (SIZE - 2) * (SIZE - 2);

        for(i = PLAY_MIN + 1; i <= PLAY_MAX - 2; i++)
            for(j = PLAY_MIN + 1; j <= PLAY_MAX - 2; j++)
            {
                if(opened[i][j])
                    openedCount++;
            }

        return openedCount == playableTiles - BOMBCOUNT;
    }
}