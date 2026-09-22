
public class Test {

    public static void main(String[] args) {

        MyHouse mickeyHouse = new MyHouse("Da Lab", 65, 67, 10);
        MyHouse donaldHouse = new MyHouse("DT1", 500, 500, 20);

        MyHouse h1 = new MyHouse("DT1", 5, 5, 1);
        MyHouse h2 = new MyHouse("NT", 7.3, 10, 1);
        MyHouse h3 = new MyHouse("DT1", 85.0 / 3.0, 1, 1);
        MyHouse h4 = new MyHouse(null, 5, 5, 1);

        mickeyHouse.setLocation("NT");
        mickeyHouse.setLength(50);
        mickeyHouse.setWidth(50);
        mickeyHouse.setNumOfFloor(1);

        System.out.println(mickeyHouse);
        System.out.println(donaldHouse);
        System.out.println("\nMickey Area: " + mickeyHouse.getUsableArea());
        System.out.println("Donald Area: " + donaldHouse.getUsableArea());

        System.out.println("\nCompenses for Mickey: " + mickeyHouse.calculateCompensationPrice());
        System.out.println("Compenses for Donald: " + donaldHouse.calculateCompensationPrice());

        System.out.println("\nh1 and h2: " + h1.equals(h2));
        System.out.println("h1 and h3: " + h1.equals(h3));
        System.out.println("h3 and h4: " + h3.equals(h4));

    }

}
