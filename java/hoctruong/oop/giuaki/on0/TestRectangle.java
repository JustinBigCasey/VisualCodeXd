
public class TestRectangle {

    public static void main(String[] args) {

        Rectangle rec1 = new Rectangle("gay", "red", 30, 22);

        System.out.println(rec1);
        System.out.println(rec1.calDiagonalLine());

        Rectangle rec2 = rec1.resize(2);

        System.out.println(rec2);

    }

}
