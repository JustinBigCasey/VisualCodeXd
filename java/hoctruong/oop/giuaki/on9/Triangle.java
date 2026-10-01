
public class Triangle {

    private String name;
    private String color;
    private double sideA;
    private double sideB;

    public Triangle(String name, String color, double sideA, double sideB) {
        this.name = name;
        this.color = color;
        this.sideA = sideA;
        this.sideB = sideB;
    }

    public String getName() {
        return this.name;
    }

    public String getColor() {
        return this.color;
    }

    public double getSideA() {
        return this.sideA;
    }

    public double getSideB() {
        return this.sideB;
    }

    public void setName(String name) {
        this.name = name;
    }

    public void setColor(String color) {
        this.color = color;
    }

    public void setSideA(double sideA) {
        this.sideA = sideA;
    }

    public void setSideB(double sideB) {
        this.sideB = sideB;
    }

    public double getHypotenuse() {
        return Math.sqrt(Math.pow(this.sideA, 2) + Math.pow(this.sideB, 2));
    }

    public double getPerimeter() {
        return this.sideA + this.sideB + getHypotenuse();
    }

    public double getArea() {
        return 0.5 * this.sideA * this.sideB;
    }

    public String getType() {

        double area = getArea();

        if (area >= 30) {
            return "A";
        } else if (area >= 15) {
            return "B";
        } else {
            return "C";
        }
    }

    public boolean isIsosceles() {
        return this.sideA == this.sideB;
    }

    public Triangle resize(double rate) {
        return new Triangle(this.name, this.color, this.sideA * rate, this.sideB * rate);
    }

    @Override
    public String toString() {
        return "Triangle[" + this.name + ", " + this.sideA + ", " + this.sideB + ", " + getArea() + ", " + getType() + "]";
    }

}
