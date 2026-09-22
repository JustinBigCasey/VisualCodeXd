class Rectangle {

    private float width;
    private float length;

    public Rectangle() {
        this.width = 1.0f;
        this.length = 1.0f;
    }

    public Rectangle(float width, float length) {
        this.width = width;
        this.length = length;
    }

    public float getWidth() {
        return width;
    }

    public float getLength() {
        return length;
    }

    public float Area() {
        return width * length;
    }

    public float getPerimeter() {
        return (width + length) * 2;
    }

    public void setWidth(float width) {
        this.width = width;
    }

    public void setLength(float length) {
        this.length = length;
    }

    @Override
    public String toString() {
        return "Rectangle[width: " + width + ", length: " + length + "]";
    }

}