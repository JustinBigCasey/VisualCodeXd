class House {

    private String houseCode;
    private int numOfBedRooms;
    private boolean hasSwimmingPool;
    private double area;
    private double costPerSquareMeter;

    
    public House() {
        this.houseCode = "A01";
        this.numOfBedRooms = 2;
        this. hasSwimmingPool = false;
        this.area = 0;
        this.costPerSquareMeter = 0;
    }

    public House(String houseCode, int numOfBedRooms, boolean hasSwimmingPool, double area, double costPerSquareMeter) {
        this.houseCode = houseCode;
        this.numOfBedRooms = numOfBedRooms;
        this. hasSwimmingPool = hasSwimmingPool;
        this.area = area;
        this.costPerSquareMeter = costPerSquareMeter;
    }

    // get

    public String getHouseCode() {
        return houseCode;
    }

    public int getNumOfBedRooms() {
        return numOfBedRooms;
    }

    public boolean getHasSwimmingPool() {
        return hasSwimmingPool;
    }

    public double getArea() {
        return area;
    }

    public double getCostPerSquareMeter() {
        return costPerSquareMeter;
    }


    // set

    public void setHouseCode(String houseCode) {
        this.houseCode = houseCode;
    }

    public void setNumOfBedRooms(int numOfBedRooms) {
        this.numOfBedRooms = numOfBedRooms;
    }

    public void setHasSwimmingPool(boolean hasSwimmingPool) {
        this.hasSwimmingPool = hasSwimmingPool;
    }

    public void setArea(double area) {
        this.area = area;
    }

    public void setCostPerSquareMeter(double costPerSquareMeter) {
        this.costPerSquareMeter = costPerSquareMeter;
    }

    public double calculateSellingPrice() {

        double subTotal = area * costPerSquareMeter;

        if(hasSwimmingPool) {
            double subTotalPool = subTotal * 1.1;
            return subTotalPool * 1.15;
        }

        else{
            return subTotal;
        }


    }


    @Override 
    public String toString() {

        return "House[" + houseCode + ", " + numOfBedRooms + ", " + hasSwimmingPool + ", " + calculateSellingPrice() + "]";

    }




}