
public class ElectricityBill {

    private String customerCode;
    private String customerType;
    private int oldIndex;
    private int newIndex;

    public ElectricityBill(String customerCode, int oldIndex, int newIndex) {
        this.customerCode = customerCode;

        if (oldIndex < 0) {
            this.oldIndex = 0;
        } else {
            this.oldIndex = oldIndex;
        }

        if (newIndex < this.oldIndex) {
            this.newIndex = this.oldIndex;
        } else {
            this.newIndex = newIndex;
        }
        this.customerType = "Household";
    }

    public ElectricityBill(String customerCode, String customerType, int oldIndex, int newIndex) {
        this.customerCode = customerCode;

        if (oldIndex < 0) {
            this.oldIndex = 0;
        } else {
            this.oldIndex = oldIndex;
        }

        if (newIndex < this.oldIndex) {
            this.newIndex = this.oldIndex;
        } else {
            this.newIndex = newIndex;
        }
        this.customerType = "Household";

        if (customerType.equalsIgnoreCase("business")) {
            this.customerType = "Business";
        } else if (customerType.equalsIgnoreCase("production")) {
            this.customerType = "Production";
        } else {
            this.customerType = "Household";
        }
    }

    public int getConsumedKWh() {
        return this.newIndex - this.oldIndex;
    }

    public double calBaseCost() {

        int E = getConsumedKWh();

        if (E > 100) {
            return 1.5 * 50 + 2 * 50 + (E - 100) * 3;
        } else if (E > 50) {
            return 1.5 * 50 + (E - 50) * 2;
        } else {
            return 1.5 * E;
        }
    }

    public double calTotalBill() {

        if ("Household".equals(this.customerType)) {
            return calBaseCost() * 1.08;
        } else if ("Production".equals(this.customerType)) {
            return calBaseCost() * 1.1;
        } else {
            return calBaseCost() * 1.15;
        }
    }

    public ElectricityBill nextMonthBill(int nextNewIndex) {
        return new ElectricityBill(this.customerCode, this.customerType, this.newIndex, nextNewIndex);
    }

    @Override
    public String toString() {
        return "ElectricityBill[" + customerCode + ", " + customerType + ", " + getConsumedKWh() + ", " + calTotalBill() + "]";
    }

}
