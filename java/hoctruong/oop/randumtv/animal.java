
class animal {

    private int eye;
    private int mouth;
    private int legs;
    private int tail;
    private String name;

    public animal() {
        this.eye = 2;
        this.mouth = 1;
        this.legs = 4;
        this.tail = 1;
        this.name = "niga cac";
    }

    public animal(int eye, int mouth, int legs, int tail, String name) {

        this.eye = eye;
        this.mouth = mouth;
        this.legs = legs;
        this.tail = tail;
        this.name = name;

    }

    public void speak(String gay) {
        System.out.println("nigga " + name + " speak: " + gay);
    }

    public void walk(int meter) {
        System.out.println("nigga " + name + " walks " + meter + " meters");
    }

    public void walk(float feet) {
        System.out.println("nigga " + name + " walks " + feet + " feet");
    }

    public void poop() {
        System.out.println("nigga " + name + " is shitting");
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getName() {
        return this.name;
    }

    @Override
    public String toString() {
        return "niga name: " + name + ", " + eye + ", " + mouth + ", " + legs + ", " + tail + " balls";
    }

    // @Override 
    // public animal compare(Object gay) {
    //     gay.
    // }
}
