public class User {

    String username;
    String email;
    int age;


    User() {
        this.username = "not provided";
        this.email = "not provided";
        this.age = 0;
    }

    User(String username) {
        this.username = username;
        this.email = "not provided";
        this.age = 0;
    }

    User(String username, String email) {
        this.username = username;
        this.email = email;
        this.age = 0;
    }


    User(String username, String email, int age) {
        this.username = username;
        this.email = email;
        this.age = age;
    }

}