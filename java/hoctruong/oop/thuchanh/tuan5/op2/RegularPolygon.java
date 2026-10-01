
class RegularPolygon {

    private String name;
    private int edgeAmount;
    private double edgeLength;

    public RegularPolygon() {
        this.name = "";
        this.edgeAmount = 3;
        this.edgeLength = 1;
    }

    public RegularPolygon(String name, int edgeAmount, double edgeLength) {
        this.name = name;
        this.edgeAmount = edgeAmount;
        this.edgeLength = edgeLength;
    }

    public RegularPolygon(String name, int edgeAmount) {
        this.name = name;
        this.edgeAmount = edgeAmount;
        this.edgeLength = 1;
    }

    public RegularPolygon(RegularPolygon polygon) {
        this.name = polygon.name;
        this.edgeAmount = polygon.edgeAmount;
        this.edgeLength = polygon.edgeLength;
    }

    public String getName() {
        return this.name;
    }

    public int getEdgeAmount() {
        return this.edgeAmount;
    }

    public double getEdgeLength() {
        return this.edgeLength;
    }

    public void setName(String name) {
        this.name = name;
    }

    public void setEdgeAmount(int edgeAmount) {
        this.edgeAmount = edgeAmount;
    }

    public void setEdgeLength(double edgeLength) {
        this.edgeLength = edgeLength;
    }

    public String getPolygon() {

        switch (this.edgeAmount) {
            case 3:
                return "Triangle";
            case 4:
                return "Quadrangle";
            case 5:
                return "Pentagon";
            case 6:
                return "Hexagon";
            default:
                return "Polygon has the number of edges greater than 6";
        }

    }

    public double getPerimeter() {
        return this.edgeLength * this.edgeAmount;
    }

    public double getArea() {
        switch (this.edgeAmount) {
            case 3:
                return Math.pow(this.edgeLength, 2) * 0.433;
            case 4:
                return Math.pow(this.edgeLength, 2) * 1;
            case 5:
                return Math.pow(this.edgeLength, 2) * 1.72;
            case 6:
                return Math.pow(this.edgeLength, 2) * 2.595;
            default:
                return -1;
        }
    }

    @Override
    public String toString() {
        return this.name + " - " + getPolygon() + " - " + getArea();
    }

}
