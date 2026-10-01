
class Cuboid {

    private String name;
    private String color;
    private double width;
    private double length;
    private double height;

    public Cuboid(String name, String color, double width, double length, double height) {
        this.name = name;
        this.color = color;
        this.width = width;
        this.length = length;
        this.height = height;
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

    public double getHeight() {
        return this.height;
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

    public void setHeight(double height) {
        this.height = height;
    }

    public double getSurfaceArea() {
        return 2 * (this.width * this.length + this.length * this.height + this.width * this.height);
    }

    public double getVolume() {
        return this.width * this.length * this.height;
    }

    public String getType() {

        double vol = getVolume();

        if (vol >= 100) {
            return "A";
        } else if (vol >= 50) {
            return "B";
        } else {
            return "C";
        }
    }

    public boolean isCube() {
        return this.width == this.length && this.length == this.height;
    }

    public Cuboid resize(double rate) {
        return new Cuboid(this.name, this.color, this.width * rate, this.length * rate, this.height * rate);
    }

    @Override
    public String toString() {
        return "Cuboid[" + name + ", " + length + ", " + width + ", " + height + ", " + getVolume() + ", " + getType() + "]";
    }

}
