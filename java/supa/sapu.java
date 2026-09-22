
public class sapu {

    public static void main(String[] args) {

        Person person = new Person("Eggman", "Davinci");
        Student student = new Student("Tommy", "Geys", 4.0);
        Employee employee = new Employee("David", "Vonbon", 4020);

        person.showName();

        student.showName();
        student.showGPA();

        employee.showName();
        employee.showSalary();
    }

}
