public class Ex7 {

    public static void main(String[] args) {

        int[] array = {4, 1, 6, 2, 51, 4, 2, 1, 4, 3, 2};

        square(array);

        System.out.print("Array with all square elements: ");
        for(int i = 0; i < array.length; i++) {
            System.out.print(array[i] + " ");
        }


    }

    public static void square(int arr[]) {

        for(int i = 0; i < arr.length; i++) {
            arr[i] = arr[i] * arr[i];
        }
        
    }

}