
class Product {

    private String name;
    private String category;
    private double price;
    private double discount;

    public Product(String name, String category, double price, double discount) {

        this.name = name;
        this.category = category;
        this.price = price;
        this.discount = discount;

    }

    public String getName() {
        return this.name;
    }

    public String getCategory() {
        return this.category;
    }

    public double getPrice() {
        return this.price;
    }

    public double getDiscount() {
        return this.discount;
    }

    public void setName(String name) {
        this.name = name;
    }

    public void setCategory(String category) {
        this.category = category;
    }

    public void setPrice(double price) {
        this.price = price;
    }

    public void setDiscount(double discount) {
        this.discount = discount;
    }

    public double getFinalPrice() {

        return price * (1.0 - discount);

    }

    public String getType() {

        double realPrice = getFinalPrice();

        if (realPrice >= 20) {
            return "LUXURY";
        } else if (realPrice >= 10) {
            return "STANDARD";
        } else {
            return "BUDGET";
        }

    }

    public boolean isFree() {
        return getFinalPrice() == 0;
    }

    public Product applyInflation(double rate) {

        double newInflate = price * (1.0 + rate);

        return new Product(this.name, this.category, newInflate, this.discount);

    }

    @Override
    public String toString() {
        return "Product[" + this.name + ", " + this.price + ", " + getFinalPrice() + ", " + getType() + "]";
    }

}
