
class Food {

    private String name;
    private double price;

    public Food(String name, double price) {
        this.name = name;
        this.price = price;
    }

    public String getName() {
        return name;
    }

    public double getPrice() {
        return price;
    }

    public void setName(String fName) {
        name = fName;
    }

    public String toString() {
        return "Product [" + name + " - " + price + "]";
    }

}
