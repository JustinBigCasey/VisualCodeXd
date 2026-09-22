
public class contruc {

    public static void main(String[] args) {

        // studen
        Student student1 = new Student("Fortnite Balls", 20, 3.3, true);
        Student student2 = new Student("Yababa", 22, 3.5, false);
        Student student3 = new Student("Gay", 33, 2.3, true);

        System.out.println(student1.name + " " + student1.age + " " + student1.gpa + " " + student1.isEnrolled);
        System.out.println(student2.name + " " + student2.age + " " + student2.gpa + " " + student2.isEnrolled);
        System.out.println(student3.name + " " + student3.age + " " + student3.gpa + " " + student3.isEnrolled);

        System.out.println();

        student1.study();
        student2.study();
        student3.study();

        System.out.println();

        // usar
        User user1 = new User("Belle");
        User user2 = new User("Eous", "Gayeus@gmail.com");
        User user3 = new User("Wise", "Phagethon@gmail.com", 22);
        User user4 = new User();

        System.out.println(user1.username + " " + user1.email + " " + user1.age);
        System.out.println(user2.username + " " + user2.email + " " + user2.age);
        System.out.println(user3.username + " " + user3.email + " " + user3.age);
        System.out.println(user4.username + " " + user4.email + " " + user4.age);

        System.out.println();

        // car
        Carpro car1 = new Carpro("Honda", "red");
        Carpro car2 = new Carpro("Toyota", "black");
        Carpro car3 = new Carpro("Charger", "yellow");

        Carpro[] cars = {car1, car2, car3};
        Carpro[] cars2 = {new Carpro("Bulubulu", "pink"), new Carpro("Belebele", "white")};

        for (Carpro car : cars) {
            car.drive();
        }

        for (Carpro car : cars2) {
            car.drive();
        }

        System.out.println();

        // toringrin
        Carpro car4 = new Carpro("Niigaas", "Mustard", 2033, "Blue");
        Carpro car5 = new Carpro("Cherry", "Coves", 2020, "Black");

        System.out.println(car1);
        System.out.println(car4);
        System.out.println(car5);

    }
}
