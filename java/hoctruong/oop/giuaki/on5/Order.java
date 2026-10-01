
class Order {

    private String orderId;
    private String customerName;
    private int itemCount;
    private double totalAmount;
    private boolean isVipCustomer;

    public Order(String orderId, String customerName, int itemCount, double totalAmount, boolean isVipCustomer) {

        if (orderId == null || orderId.trim().isEmpty()) {
            this.orderId = "ORD000";
        } else {
            this.orderId = orderId;
        }

        if (customerName == null || customerName.trim().isEmpty()) {
            this.customerName = "Guest";
        } else {
            this.customerName = customerName;
        }

        if (itemCount < 0) {
            this.itemCount = 0;
        } else {
            this.itemCount = itemCount;
        }

        if (totalAmount < 0.0) {
            this.totalAmount = 0;
        } else {
            this.totalAmount = totalAmount;
        }

        this.isVipCustomer = isVipCustomer;

    }

    public String getOrderId() {
        return this.orderId;
    }

    public String getCustomerName() {
        return this.customerName;
    }

    public int getItemCount() {
        return this.itemCount;
    }

    public double getTotalAmount() {
        return this.totalAmount;
    }

    public boolean getIsVipCustomer() {
        return this.isVipCustomer;
    }

    public void setOrderId(String orderId) {
        if (orderId == null || orderId.trim().isEmpty()) {

        } else {
            this.orderId = orderId;
        }
    }

    public void setCustomerName(String customerName) {
        if (customerName == null || customerName.trim().isEmpty()) {

        } else {
            this.customerName = customerName;
        }
    }

    public void setItemCount(int itemCount) {
        if (itemCount < 0) {

        } else {
            this.itemCount = itemCount;
        }
    }

    public void setTotalAmount(double totalAmount) {
        if (totalAmount < 0.0) {

        } else {
            this.totalAmount = totalAmount;
        }
    }

    public void setIsVipCustomer(boolean isVipCustomer) {
        this.isVipCustomer = isVipCustomer;
    }

    public double calculateFinalPayment(double voucherDiscount) {

        double price = this.totalAmount;

        if (this.isVipCustomer) {
            price = this.totalAmount * 0.9;
        }
        if (this.itemCount >= 5) {
            price = price * 0.95;
        }
        if (voucherDiscount > 0 && voucherDiscount <= 500000.0) {
            price = price - voucherDiscount;
        }

        if (price < 0) {
            return 0;
        }
        return price;
    }

    public String getShippingFeeTier() {
        if (this.totalAmount >= 1000000.0 || this.isVipCustomer) {
            return "FREE";
        } else if (this.totalAmount >= 300000.0) {
            return "STANDARD";
        } else {
            return "EXPRESS_ONLY";
        }
    }

    public boolean isHighValueOrder() {
        return this.totalAmount >= 5000000 && this.itemCount >= 3;
    }

    public Order splitOrder(int splitItemCount) {
        if (splitItemCount <= 0 || splitItemCount >= this.itemCount) {
            return null;
        }

        double newTotalAmount = this.totalAmount * ((double) splitItemCount / this.itemCount);

        Order newOrder = new Order("SPLIT_" + this.orderId, this.customerName, splitItemCount, newTotalAmount, this.isVipCustomer);

        this.itemCount = this.itemCount - splitItemCount;
        this.totalAmount = this.totalAmount - newTotalAmount;

        return newOrder;
    }

    @Override
    public String toString() {
        return "Order[" + this.orderId + ", " + this.customerName + ", " + this.itemCount + ", " + this.totalAmount + ", " + getShippingFeeTier() + "]";
    }

}
