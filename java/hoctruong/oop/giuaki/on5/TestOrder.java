
public class TestOrder {

    public static void main(String[] args) {

        Order ogay = new Order("", "niga", 6, 2000, false);
        Order ord = new Order("ORD01", "Le Van D", 6, 1200000.0, true);

        System.out.println(ogay.calculateFinalPayment(500));

        Order fortnite = ord.splitOrder(1);

        System.out.println(ogay);
        System.out.println(ord);
        System.out.println(fortnite);

    }

}
