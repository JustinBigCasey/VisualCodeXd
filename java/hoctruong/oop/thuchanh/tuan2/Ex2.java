public class Ex2 {

    public static void main(String[] args) {

        int[] array = {-5, 5, 3, 1, 6, 4, 1, -64, 12, 54};

        System.out.println("The minumum value in array: " + findMin(array));

    }

    public static int findMin(int arr[]) {

        int min = arr[0];

        for(int i = 0; i < arr.length; i++) {
            if(arr[i] < min) 
                min = arr[i];
        }

        return min;

    }

}