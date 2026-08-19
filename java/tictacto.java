import java.util.Random;
import java.util.Scanner;

public class tictacto
{
    static final int SIZE = 5;
    static final int PLAYER = 1;
    static final int BOT = 2;
    

    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        Random random = new Random();

        boolean gaming = true;

        int[][] board = new int[SIZE][SIZE]; 

        while(gaming)
        {   
            if(checkWinGame(board))
            {
                gaming = false;
                printBoard(board);
                break;
            }

            printBoard(board);

            playerChoice(board);

            botChoice(board);
        }

    }
    
    // check who win bruh
    static boolean checkWinGame(int[][] board)
    {
        int i, j, fill = 0;

        for(i = 1; i < SIZE; i++)
        {
            for(j = 1; j < SIZE; j++)
            {

            // check bot winb

                // horizon
                if (board[i][1] == BOT && board[i][2] == BOT && board[i][3] == BOT

                ||

                // vertica
                board[1][j] == BOT && board[2][j] == BOT && board[3][j] == BOT

                ||

                // diago
                board[1][1] == BOT && board[2][2] == BOT && board[3][3] == BOT

                ||

                // diago 2
                board[3][1] == BOT && board[2][2] == BOT && board[1][3] == BOT)
                
                {
                    System.out.print("\n ! YOU LOSE ! \n\n");
                    return true;
                }

            // check player sigma win

                // horizon
                else if (board[i][1] == PLAYER && board[i][2] == PLAYER && board[i][3] == PLAYER

                ||

                // vertica
                board[1][j] == PLAYER && board[2][j] == PLAYER && board[3][j] == PLAYER

                ||

                // diago
                board[1][1] == PLAYER && board[2][2] == PLAYER && board[3][3] == PLAYER

                ||

                // diago 2
                board[3][1] == PLAYER && board[2][2] == PLAYER && board[1][3] == PLAYER)
                
                {
                    System.out.print("\n \\\\// YOU WIN //\\\\ \n\n");
                    return true;
                }
            
            // tie
                else if(board[i][j] != 0)
                {
                    fill++;

                    if(fill == 9)
                    {
                        System.out.print("\n \\ TIE / \n\n");
                        return true;
                    }
                }
            }
        }

        return false;
    }

    // player choose 
    static void playerChoice(int[][] board)
    {
        int i, j, row, column;
        Scanner scan = new Scanner(System.in);

        // row
        while (true) 
        {
            System.out.print("Enter row: ");
            row = scan.nextInt();

            if(row > 0 && row <= SIZE - 2)
                break;

            else
                System.out.printf("\n! Please enter in 1 - %d !\n\n", SIZE - 2); 
        }

        // column
        while (true) 
        {
            System.out.print("Enter column: ");
            column = scan.nextInt();

            if(column > 0 && column <= SIZE - 2)
                break;

            else
                System.out.printf("\n! Please enter in 1 - %d !\n\n", SIZE - 2); 
        }

        if (board[row][column] != 0)
        {
            System.out.print("\n! You cannot mark there !\n\n");
            playerChoice(board);
        }

        else
            board[row][column] = PLAYER;

    }

    // bot check win
    static boolean isWinChoice(int[][] board, int row, int column, int playe)
    {
        board[row][column] = playe;

        boolean win = 
            // horizon
            (board[row][1] == playe && board[row][2] == playe && board[row][3] == playe)

            ||

            // vertica
            board[1][column] == playe && board[2][column] == playe && board[3][column] == playe

            ||

            // diago
            board[1][1] == playe && board[2][2] == playe && board[3][3] == playe

            ||

            // diago 2
            board[3][1] == playe && board[2][2] == playe && board[1][3] == playe;

        board[row][column] = 0;

        return win;

    }

    // bot chatgpt choose gay moment
    static void botChoice(int[][] board)
    {
        int i, j;
        
        // win win
        for(i = 1; i < SIZE - 1; i++)
        {
            for(j = 1; j < SIZE - 1; j++)
            {
                if(board[i][j] == 0)
                {
                    if(isWinChoice(board, i, j, BOT))
                    {
                        board[i][j] = BOT;
                        return;
                    }
                }
            }
        }

        // block gay
        for(i = 1; i < SIZE - 1; i++)
        {
            for(j = 1; j < SIZE - 1; j++)
            {
                if(board[i][j] == 0)
                {
                    if(isWinChoice(board, i, j, PLAYER))
                    {
                        board[i][j] = BOT;
                        return;
                    }
                }
            }
        }


        // midle
        if (board[2][2] == 0)
        {
            board[2][2] = BOT;
            return;
        }

        // corne
        int[][] corners = { {1, 1}, {1, 3}, {3, 1}, {3, 3} };

        for (int[] corner : corners)
        {
            if(board[corner[0]][corner[1]] == 0)
            {
                board[corner[0]][corner[1]] = BOT;
                return;
            }
        }

        // randumtv
        for(i = 1; i < SIZE; i++)
        {
            for(j = 1; j < SIZE; j++)
            {   
                if(board[i][j] == 0)
                {
                    board[i][j] = BOT;
                    return;
                }
            }
        }
        
    }

    // print board gay
    static void printBoard(int[][] board)
    {
        int i, j;

        for(i = 0; i < SIZE; i++)
        {
            for(j = 0; j < SIZE; j++)
            {   
                // player
                if(board[i][j] == 1)
                    System.out.print("[X] ");

                // bot ai play
                else if(board[i][j] == 2)
                    System.out.print("[O] ");

                //corner()
                else if(((i == 0 || i == SIZE - 1) && (j == 0 || j == SIZE - 1)))
                    System.out.printf("/#/ ");

                // top
                else if(i == 0)
                    System.out.printf("/%d/ ", j);

                // bottom
                else if(i == SIZE - 1)
                    System.out.printf("/%d/ ", j);

                // left
                else if(j == 0)
                    System.out.printf("/%d/ ", i);

                // right
                else if(j == SIZE - 1)
                    System.out.printf("/%d/ ", i);

                // board
                else
                    System.out.print("[ ] ");
            }
            System.out.println("");
        }
    }
}