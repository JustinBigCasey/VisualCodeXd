
public class vd1 {

    public static void main(String[] args) {

        Food food1 = new Food("cut", 3.5);
        Food food2 = new Food("da den", 0);

        System.out.println(food1.getPrice());

        food1.setName("Ho Chi Minh");

        System.out.println(food1.getName());

        System.out.println(food1.toString());

    }

}
