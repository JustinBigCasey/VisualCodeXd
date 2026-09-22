public class Ex6 {

    public static void main(String[] args) {

        int[] array = {4, 1, 6, 2, 51, 4, 2, 1, 4, 3, 2};
        int target = 6;

        System.out.printf("Find %d in array at index: %d", target, find(array, target));

    }

    public static int find(int[] arr, int k) {

        for(int i = 0; i < arr.length; i++) {
            if(arr[i] == k) 
                return i;
        }

        return -1;

    }

}