
public class Car {

    String make = "Nigasan";
    String model = "Gay";
    int year = 2010;
    double price = 676700.67;
    boolean isRunning = false;

    void start() {
        isRunning = true;
        System.out.println("Starting niga balls");
    }

    void stop() {
        isRunning = false;
        System.out.println("Stop balls");
    }

    void drive() {
        System.out.println("Yo driving a gay " + model);
    }

    void brake() {
        System.out.println("Yo brake a gay " + model);
    }

}
