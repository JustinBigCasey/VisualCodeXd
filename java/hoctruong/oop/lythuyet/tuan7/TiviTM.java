
class TiviTM extends Tivi {

    private int color;
    private String type;

    public TiviTM() {

        super("TV123", "Sony", 40, 0);
        this.color = 8000000;
        this.type = "4K";

    }

    public int[] listColor = {8000000, 16000000, 32000000};
    public String[] listType = {"HD", "4K", "QLED"};

    public TiviTM(String id, String company, int inche, double price, int color, String type) {
        super(id, company, inche, price);

        for (int co : listColor) {
            if (co == color) {
                this.color = color;
                break;
            } else {
                this.color = 8000000;
            }
        }

        for (String ty : listType) {
            if (ty.equals(type)) {
                this.type = type;
                break;
            } else {
                this.type = "4K";
            }
        }
    }

    @Override
    public String toString() {
        return "Smart TV [" + super.id + ", " + super.company + ", " + super.inche + ", " + color + ", " + type + "]";
    }

    public double calPrice() {
        return this.price * 1.2;
    }

}
