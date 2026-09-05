import java.util.Scanner;

public class Exercise1 {

    static Scanner scan = new Scanner(System.in);

    public static void main(String[] args){

        String name, birthday, id;


        System.out.print("name: ");
        name = scan.nextLine();

        System.out.print("birthday: ");
        birthday = scan.nextLine();

        System.out.print("Student Id: ");
        id = scan.nextLine();

        System.out.printf("HELLO %s born in %s with ID %s", name, birthday, id); 

    }
}