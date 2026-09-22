public class Ex4 {

    public static void main(String[] args) {

        int[] array = {4, 1, 6, 2, 51, 4, 2, 1, 4, 3, 2};
        int find = 4;

        System.out.printf("Count %d in array: %d", find, countSpec(array, find));

    }

    public static int countSpec(int[] arr, int find) {

        int count = 0;

        for(int i = 0; i < arr.length; i++) {
            if(arr[i] == find) 
                count++;
        }

        return count;

    }

}