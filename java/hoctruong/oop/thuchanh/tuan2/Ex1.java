
public class Ex1 {

    public static void main(String[] args) {
        int[] array = {1, 5, 6, 8, 2, 1, 5, 6, 140, 4};

        System.out.println("Max number in array: " + findMax(array));
    }

    public static int findMax(int arr[]) {

        int max = arr[0];

        for (int i = 0; i < arr.length; i++) {
            if (arr[i] > max)
                max = arr[i];
        }

        return max;
    }

}