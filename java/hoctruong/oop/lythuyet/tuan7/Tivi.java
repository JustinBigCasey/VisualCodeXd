
class Tivi {

    protected String id;
    protected String company;
    protected int inche;
    protected double price;

    public Tivi() {
        this.id = "TV123";
        this.company = "Sony";
        this.inche = 40;
        this.price = 0;
    }

    public int[] listInche = {32, 40, 43, 49, 50, 55};

    public Tivi(String id, String company, int inche, double price) {

        this.id = id;
        this.company = company;
        this.price = price;

        for (int in : listInche) {
            if (inche == in) {
                this.inche = inche;
                break;
            } else {
                this.inche = 32;
            }
        }
    }

    public String getId() {
        return this.id;
    }

    public String getCompany() {
        return this.company;
    }

    public int getInche() {
        return this.inche;
    }

    public double getPrice() {
        return this.price;
    }

    public void setId(String id) {
        this.id = id;
    }

    public void setCompany(String company) {
        this.company = company;
    }

    public void setInche(int inche) {
        this.inche = inche;
    }

    public void setPrice(double price) {
        this.price = price;
    }

    @Override
    public String toString() {
        return "Smart TV [" + id + ", " + company + ", " + inche + "]";
    }

}
