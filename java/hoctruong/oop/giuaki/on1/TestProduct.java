
public class TestProduct {

    public static void main(String[] args) {

        Product pro1 = new Product("fortnite", "gay", 322, 0.5);

        System.out.println(pro1);

        Product pro2 = pro1.applyInflation(0.8);

        System.out.println(pro2);

    }

}
