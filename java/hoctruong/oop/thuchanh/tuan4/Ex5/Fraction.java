
class Fraction {

    private int numerator;
    private int denominator;

    public Fraction() {

        this.numerator = 0;
        this.denominator = 1;

    }

    public Fraction(int num, int den) {

        numerator = num;
        denominator = den;

    }

    public Fraction(Fraction f) {

        this.numerator = f.numerator;
        this.denominator = f.denominator;

    }

    public Fraction add(Fraction f) {

        int num = (this.numerator * f.denominator) + (f.numerator * this.denominator);
        int den = this.denominator * f.denominator;

        return new Fraction(num, den);
    }

    public Fraction sub(Fraction f) {

        int num = (this.numerator * f.denominator) - (f.numerator * this.denominator);
        int den = this.denominator * f.denominator;

        return new Fraction(num, den);

    }

    public Fraction mul(Fraction f) {

        int num = this.numerator * f.numerator;
        int den = this.denominator * f.denominator;

        return new Fraction(num, den);

    }

    public Fraction div(Fraction f) {

        int num = this.numerator * f.denominator;
        int den = this.denominator * f.numerator;

        return new Fraction(num, den);

    }

    private int findGCD(int a, int b) {

        a = Math.abs(a);
        b = Math.abs(b);

        if (a == 0) {
            return b;
        }
        if (b == 0) {
            return a;
        }

        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    public void reducer() {

        int gcd = findGCD(numerator, denominator);

        this.numerator = this.numerator / gcd;
        this.denominator = this.denominator / gcd;

    }

    @Override
    public String toString() {
        return "Fraction[num=" + numerator + ", den=" + denominator + "]";
    }

}
