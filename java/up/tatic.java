
public class tatic {

    public static void main(String[] args) {

        // frien
        Friend friend1 = new Friend("Niggaballs");
        Friend friend2 = new Friend("GayBalls");
        Friend friend3 = new Friend("What");

        System.out.println(friend1.numOfFriends);
        System.out.println(friend2.numOfFriends);
        System.out.println(Friend.numOfFriends);

        Friend.showFriends();

        System.out.println();

        // inhariti
        Dog dog = new Dog();
        Cat cat = new Cat();
        Plant plant = new Plant();

        System.out.println(dog.isAlive);
        System.out.println(cat.isAlive);
        System.out.println(plant.isAlive);

        dog.eat();
        cat.eat();
        plant.photosynthesize();

        System.out.println(dog.lives);
        System.out.println(cat.lives);

        dog.speak();
        cat.speak();

        System.out.println();

        // ovarai
        Dog dog2 = new Dog();
        Cat cat2 = new Cat();
        Fish fish2 = new Fish();

        dog2.move();
        cat2.move();
        fish2.move();

    }

}
