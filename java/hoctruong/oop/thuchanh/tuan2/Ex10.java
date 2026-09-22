
import java.math.BigDecimal;

public class Ex10 {

    public static void main(String[] args) {

        BigDecimal[] array = {new BigDecimal(4), new BigDecimal(2), new BigDecimal(67), new BigDecimal(1), new BigDecimal(5)};

        System.out.println("Maximum value of a BigDecimal object array: " + findMax(array));

    }

    public static BigDecimal findMax(BigDecimal[] arr) {
        BigDecimal max = arr[0];

        for (int i = 0; i < arr.length; i++) {
            if (arr[i].compareTo(max) > 0) {
                max = arr[i];
            }
        }

        return max;
    }

}
