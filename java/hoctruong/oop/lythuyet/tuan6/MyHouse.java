
public class MyHouse {

    private String location;
    private double length;
    private double width;
    private int numOfFloor;

    public MyHouse() {

        this.location = "NT";
        this.length = 15;
        this.width = 5;
        this.numOfFloor = 1;

    }

    public MyHouse(String loc, double len, double wid, int noF) {

        location = loc;
        length = len;
        width = wid;
        numOfFloor = noF;

    }

    public String getLocation() {
        return location;
    }

    public double getLength() {
        return length;
    }

    public double getWidth() {
        return width;
    }

    public int getNumOfFloor() {
        return numOfFloor;
    }

    public void setLocation(String loc) {
        location = loc;
    }

    public void setLength(double len) {
        length = len;
    }

    public void setWidth(double wid) {
        width = wid;
    }

    public void setNumOfFloor(int nof) {
        numOfFloor = nof;
    }

    @Override
    public String toString() {
        return "Location: " + location + " | Length: " + length + " | Width: " + width + " | Floor: " + numOfFloor;
    }

    public double getUsableArea() {
        return length * width * numOfFloor;
    }

    public double calculateCompensationPrice() {

        double area = getUsableArea();

        if ("DT1".equals(location)) {
            return area * 30;
        } else if ("DT2".equals(location)) {
            return area * 15;
        } else if ("NT".equals(location)) {
            return area * 10;
        } else {
            return 0;
        }
    }

    @Override
    public boolean equals(Object obj) {
        if (obj instanceof MyHouse) {
            MyHouse loca = (MyHouse) obj;

            if (this.location == (null) || loca.getLocation() == null) {
                return false;
            } else {
                double cal1 = this.calculateCompensationPrice();
                double cal2 = loca.calculateCompensationPrice();

                double deviate = Math.abs(cal1 - cal2);

                if (deviate <= 50) {
                    return true;
                } else {
                    return false;
                }

            }

        } else {
            return false;
        }

    }

}
