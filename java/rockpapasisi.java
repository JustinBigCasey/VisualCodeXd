import java.util.InputMismatchException;
import java.util.Random;
import java.util.Scanner;

public class rockpapasisi
{
    public static void main(String[] args)
    {
        Random randum = new Random();
        Scanner scan = new Scanner(System.in);

        int bot, player, botscore = 0, score = 0;
        boolean game = true;

        System.out.println("==== ROCK PAPER SCISSOR NIGGA ====");
        System.out.println("Option:");
        System.out.println("1. Rock");
        System.out.println("2. Paper");
        System.out.println("3. Scissor");
        System.out.println("4. Exit");
        System.out.println("-----------------------");

        
        while (game) 
        { 
            try
            {
                System.out.print("Choose: ");
                player = scan.nextInt();
                scan.nextLine();

                switch(player)
                {
                    case 1:
                        System.out.println("You chose [Rock]");
                        break;

                    case 2:
                        System.out.println("You chose [Paper]");
                        break;

                    case 3:
                        System.out.println("You chose [Scissor]");
                        break;

                    case 4:
                        System.out.println("\n! Bye bye nigga !");
                        System.out.println("\n------------");
                        System.out.printf("You Won: %d", score);
                        System.out.printf("\nYou Lost: %d", botscore);
                        System.out.println("\n------------");
                        System.exit(0);
                        break;

                    default:
                        System.err.println("! Input a valid option !");
                        break;
                }

                bot = randum.nextInt(1, 4);

                switch(bot)
                {
                    case 1:
                        System.out.println("Bot chose [Rock]");
                        break;

                    case 2:
                        System.out.println("Bot chose [Paper]");
                        break;

                    case 3:
                        System.out.println("Bot chose [Scissor]");
                        break;
                }
                
                // bot win
                if( (bot == 1 && player == 3) ||
                    (bot == 2 && player == 1) ||
                    (bot == 3 && player == 2))
                    {
                        System.out.println("You lost!\n");
                        botscore++;
                    }

                // player win
                else if((player == 1 && bot == 3) ||
                        (player == 2 && bot == 1) ||
                        (player == 3 && bot == 2))
                    {
                        System.out.println("You WIN !\n");
                        score++;
                    }

                // lol
                else
                    System.out.println("/ TIE /\n");
                    

            }

            catch(InputMismatchException e)
            {   
                System.out.println("! Please input a valid option !");
                scan.nextLine(); 
            }
        }
        
        scan.close();
    }
}