
public class Circle {

    private String name;
    private String color;
    private double radius;

    public Circle(String name, String color, double radius) {
        this.name = name;
        this.color = color;
        this.radius = radius;
    }

    public String getName() {
        return this.name;
    }

    public String getColor() {
        return this.color;
    }

    public double getRadius() {
        return this.radius;
    }

    public void setName(String name) {
        this.name = name;
    }

    public void setColor(String color) {
        this.color = color;
    }

    public void setRadius(double radius) {
        this.radius = radius;
    }

    public double getPerimeter() {
        return 2 * 3.14 * this.radius;
    }

    public double getArea() {
        return 3.14 * this.radius * this.radius;
    }

    public String getType() {

        double area = getArea();

        if (area >= 50) {
            return "A";
        } else if (area >= 20) {
            return "B";
        } else {
            return "C";
        }
    }

    public boolean isUnitCircle() {
        return this.radius == 1.0;
    }

    public Circle resize(double rate) {
        return new Circle(this.name, this.color, this.radius * rate);
    }

    @Override
    public String toString() {
        return "Circle[" + this.name + ", " + this.radius + ", " + getArea() + ", " + getType() + "]";
    }

}
