public class Ex5 {

    public static void main(String[] args) {

        int[] array = {13, 300, 2, 5, 7, 100, 55, 40};


        System.out.println("Prime numbers in array: " + countPrime(array));

    }

    public static int countPrime(int[] arr) {

        int count = 0;

        for(int i = 0; i < arr.length; i++) {

            for (int j = 2; j <= arr[i]; j++) {

                if (arr[i] < 2)
                    break;

                else if (arr[i] == j) {
                    count++;
                    break;
                }
    
                else if (arr[i] % j == 0) 
                    break;
            }
        }

        return count;

    }
}