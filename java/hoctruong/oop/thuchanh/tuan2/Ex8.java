public class Ex8 {

    public static void main(String[] args) {

        int[] array = {4, 1, 6, 2, 51, 4, 2, 1, 4, 3, 2};
        int k = 2;
        
        array = divisibleNumbers(array, k);

        System.out.print("Array division " + k + ": ");
        for (int i = 0; i < array.length; i++) {
            System.out.print(array[i] + " ");      
        }

    }

    public static int[] divisibleNumbers(int arr[], int k) {

        int count = 0;

        for (int i = 0; i < arr.length; i++) {
            if(arr[i] % k == 0)
                count++;
        }

        int[] newArray = new int[count];
        int s = 0;

        for (int i = 0; i < arr.length; i++) {

            if(arr[i] % k == 0){
                newArray[s] = arr[i]; 
                s++;
            }
            
        }

        return newArray;

    }


}