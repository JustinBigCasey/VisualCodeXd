
public class actrac {

    public static void main(String[] args) {

        Circle circle = new Circle(5.3);
        Triangle triangle = new Triangle(4.5, 5);
        Rectangle rectangle = new Rectangle(6.7, 7.8);

        circle.display();
        triangle.display();
        rectangle.display();

        System.out.println(circle.area());
        System.out.println(triangle.area());
        System.out.println(rectangle.area());

    }

}
