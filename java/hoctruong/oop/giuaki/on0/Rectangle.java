
class Rectangle {

    private String name;
    private String color;
    private double width;
    private double length;

    Rectangle(String name, String color, double wid, double len) {

        this.name = name;
        this.color = color;
        this.width = wid;
        this.length = len;

    }

    public String getName() {
        return this.name;
    }

    public String getColor() {
        return this.color;
    }

    public double getWidth() {
        return this.width;
    }

    public double getLength() {
        return this.length;
    }

    public void setName(String name) {
        this.name = name;
    }

    public void setColor(String color) {
        this.color = color;
    }

    public void setWidth(double width) {
        this.width = width;
    }

    public void setLength(double length) {
        this.length = length;
    }

    public double getPerimeter() {
        return (width + length) * 2;
    }

    public String getType() {

        double perimeter = width * length;

        if (perimeter >= 10) {
            return "A";
        } else if (perimeter >= 5) {
            return "B";
        } else {
            return "C";
        }

    }

    public boolean isSquare() {

        return this.length == this.width;

    }

    public double calDiagonalLine() {
        return Math.sqrt(Math.pow(width, 2) + Math.pow(length, 2));
    }

    public Rectangle resize(double rate) {

        double newLength = this.length * rate;
        double newWidth = this.width * rate;

        return new Rectangle(this.name, this.color, newWidth, newLength);

    }

    @Override
    public String toString() {

        double area = width * length;

        return "Rectangle[" + name + ", " + length + ", " + width + ", " + area + ", " + getType() + "]";
    }

}
