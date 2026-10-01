
public class Square {

    private String name;
    private String color;
    private double side;

    public Square(String name, String color, double side) {
        this.name = name;
        this.color = color;
        this.side = side;
    }

    public String getName() {
        return this.name;
    }

    public String getColor() {
        return this.color;
    }

    public double getSide() {
        return this.side;
    }

    public void setName(String name) {
        this.name = name;
    }

    public void setColor(String color) {
        this.color = color;
    }

    public void setSide(double side) {
        this.side = side;
    }

    public double getPerimeter() {
        return 4 * this.side;
    }

    public double getArea() {
        return this.side * this.side;
    }

    public String getType() {

        double area = getArea();

        if (area >= 25) {
            return "A";
        } else if (area >= 10) {
            return "B";
        } else {
            return "C";
        }

    }

    public double calDiagonalLine() {
        return Math.sqrt(2) * this.side;
    }

    public boolean isLarge() {
        return this.side >= 10.0;
    }

    public Square resize(double rate) {
        return new Square(this.name, this.color, this.side * rate);
    }

    @Override
    public String toString() {
        return "Square[" + name + ", " + side + ", " + getArea() + ", " + getType() + "]";
    }

}
