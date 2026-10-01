
public class FlightTicket {

    private String ticketId;
    private String passengerName;
    private String seatClass;
    private double basePrice;
    private double baggageWeight;

    public FlightTicket(String ticketId, String passengerName, double basePrice) {
        this.ticketId = ticketId;
        this.passengerName = passengerName;

        if (basePrice <= 0) {
            this.basePrice = 500.0;
        } else {
            this.basePrice = basePrice;
        }

        this.seatClass = "Economy";
        this.baggageWeight = 0.0;

    }

    public FlightTicket(String ticketId, String passengerName, String seatClass, double basePrice, double baggageWeight) {

        this.ticketId = ticketId;
        this.passengerName = passengerName;

        if (basePrice <= 0) {
            this.basePrice = 500.0;
        } else {
            this.basePrice = basePrice;
        }

        if (baggageWeight < 0) {
            this.baggageWeight = 0.0;
        } else {
            this.baggageWeight = baggageWeight;
        }

        if ("Business".equals(seatClass)) {
            this.seatClass = seatClass;
        } else if ("SkyBoss".equals(seatClass)) {
            this.seatClass = seatClass;
        } else if ("Economy".equals(seatClass)) {
            this.seatClass = seatClass;
        } else {
            this.seatClass = "Economy";
        }

    }

    public double calBaggageFee() {

        if (this.seatClass.equals("Business")) {
            if (this.baggageWeight > 30) {
                return (this.baggageWeight - 30) * 15;
            }
        } else if (this.seatClass.equals("SkyBoss")) {
            if (this.baggageWeight > 20) {
                return (this.baggageWeight - 20) * 20;
            }
        } else if (this.seatClass.equals("Economy")) {
            if (this.baggageWeight > 7) {
                return (this.baggageWeight - 7) * 25;
            }
        }

        return 0;

    }

    public double calTotalPrice() {
        if (this.seatClass.equals("Business")) {
            return this.basePrice * 2 + calBaggageFee();
        } else if (this.seatClass.equals("SkyBoss")) {
            return this.basePrice * 1.5 + calBaggageFee();
        } else if (this.seatClass.equals("Economy")) {
            return this.basePrice * 1 + calBaggageFee();
        }

        return -1;
    }

    public String getTicketLevel() {
        double total = calTotalPrice();

        if (total >= 2000) {
            return "VIP";
        } else if (total >= 1000) {
            return "Standard";
        } else {
            return "Promo";
        }
    }

    public FlightTicket changeBaggage(double deltaWeight) {

        if (this.baggageWeight + deltaWeight > 0) {
            return new FlightTicket(this.ticketId, this.passengerName, this.seatClass, this.basePrice, this.baggageWeight + deltaWeight);
        }
        return new FlightTicket(this.ticketId, this.passengerName, this.seatClass, this.basePrice, 0);
    }

    @Override
    public String toString() {
        return "FlightTicket[" + this.ticketId + ", " + this.passengerName + ", " + this.seatClass + ", " + this.baggageWeight + ", " + calTotalPrice() + ", " + getTicketLevel() + "]";
    }

}
