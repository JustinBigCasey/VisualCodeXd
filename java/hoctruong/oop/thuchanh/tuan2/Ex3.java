public class Ex3 {

    public static void main(String[] args) {

        int[] array = {4, 1, 6, 4, -5, 100};

        System.out.println("Sum all even numbers in array: " + sumArr(array));

    }

    public static int sumArr(int arr[]) {

        int sum = 0;

        for (int i = 0; i < arr.length; i++) {
            if (arr[i] % 2 == 0) 
                sum += arr[i];
        }

        return sum;

    }

}