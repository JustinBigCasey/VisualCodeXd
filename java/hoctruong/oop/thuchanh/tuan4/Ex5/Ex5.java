
public class Ex5 {

    public static void main(String[] args) {

        Fraction fac1 = new Fraction(1, 5);
        Fraction fac2 = new Fraction(5, 7);
        Fraction fac3 = new Fraction(fac1);
        Fraction fac4 = new Fraction(66, 11);

        System.out.println(fac1);
        System.out.println(fac2);
        System.out.println(fac3);
        System.out.println("");

        System.out.println(fac1.add(fac3));
        System.out.println(fac1.div(fac4));
        System.out.println(fac1.mul(fac4));
        System.out.println(fac1.sub(fac3));
        System.out.println("");

        fac1.reducer();
        System.out.println(fac1);

        fac4.reducer();
        System.out.println(fac4);
    }

}
