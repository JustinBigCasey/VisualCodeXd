import java.util.Scanner;

public class bala{
    public static void main(String[] args) {

        int age;
        String name;

        Scanner scan = new Scanner(System.in);

        System.out.print("Input age: ");
        age = scan.nextInt();

        scan.nextLine();

        System.out.print("Input name: ");
        name = scan.nextLine();

        System.out.print("Age: " + age);
        System.out.print("\nName: " + name);

    }
}