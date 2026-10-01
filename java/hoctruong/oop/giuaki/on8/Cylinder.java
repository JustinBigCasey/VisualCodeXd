
public class Cylinder {

    private String name;
    private String color;
    private double radius;
    private double height;

    public Cylinder(String name, String color, double radius, double height) {
        this.name = name;
        this.color = color;
        this.radius = radius;
        this.height = height;
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

    public double getHeight() {
        return this.height;
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

    public void setHeight(double height) {
        this.height = height;
    }

    public double getBaseArea() {
        return 3.14 * this.radius * this.radius;
    }

    public double getTotalArea() {
        return 2 * 3.14 * this.radius * this.height + 2 * getBaseArea();
    }

    public double getVolume() {
        return getBaseArea() * this.height;
    }

    public String getType() {

        double vol = getVolume();

        if (vol >= 150) {
            return "GIANT";
        } else if (vol >= 50) {
            return "MEDIUM";
        } else {
            return "SMALL";
        }
    }

    public boolean isEquilateral() {
        return this.height == 2 * this.radius;
    }

    public Cylinder resize(double rate) {
        return new Cylinder(this.name, this.color, this.radius * rate, this.height * rate);
    }

    @Override
    public String toString() {
        return "Cylinder[" + this.name + ", " + this.radius + ", " + this.height + ", " + getVolume() + ", " + getType() + "]";
    }

}
