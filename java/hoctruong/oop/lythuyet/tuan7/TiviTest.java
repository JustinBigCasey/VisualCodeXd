
public class TiviTest {

    public static void main(String[] args) {

        Tivi tv1 = new Tivi("TV001", "Samsung", 99, 5000000);
        System.out.println(tv1);

        TiviTM tv2 = new TiviTM("TM001", "LG", 55, 10000000, 99, "8K");
        System.out.println(tv2);

        System.out.println("Smart TV 2 price: " + tv2.calPrice());

        Tivi tv3 = new TiviTM("4124", "gay", 55, 20000, 22, "fortnite");
        System.out.println(tv3);
        System.out.println("Smart TV 3 price: " + ((TiviTM) tv3).calPrice());

    }

}
