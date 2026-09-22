public class Ex9 {

    public static void main(String[] args) {
        int[] array = {1, 4, 2, 1, 6, 5, 9, 8};

        System.out.println("Max third number in array: " + findMax3(array));
    }

    public static int findMax3(int arr[]) {

        int max1 = arr[0];
        int max2 = arr[0];
        int max3 = arr[0];
        
        for (int i = 0; i < arr.length; i++) {
            
            if(arr[i] > max1) {
                max3 = max2;
                max2 = max1;
                max1 = arr[i];
            }
            else if(arr[i] > max2 && arr[i] != max1) {
                max3 = max2;
                max2 = arr[i];
            }
            else if(arr[i] > max3 && arr[i] != max1 && arr[i] != max2) {
                max3 = arr[i];
            }
        }

        return max3;
        
    }

}