
public class Carpro {

    String make;
    String model;
    String color;
    int year;

    Carpro(String model, String color) {
        this.model = model;
        this.color = color;
    }

    Carpro(String make, String model, int year, String color) {
        this.make = make;
        this.model = model;
        this.year = year;
        this.color = color;
    }

    void drive() {
        System.out.println("Yo driving da " + this.color + " " + this.model);
    }

    @Override
    public String toString() {
        return this.color + " " + this.year + " " + this.make + " " + this.model;
    }

}
