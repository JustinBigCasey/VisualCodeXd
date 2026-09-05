import java.util.Scanner;

public class Exercise1 {

    static Scanner scan = new Scanner(System.in);

    public static void main(String args[]) {
        int n;

        System.out.print("Enter n: ");
        n = scan.nextInt();

        int arr[] = new int[n];

        
        // 1

        System.out.println("1. Enter array: ");
        inputArr(arr.length, arr);


        System.out.print("1. Array: ");
        outputArr(arr.length, arr);


        // 2
        System.out.print("2. Negative values in array: ");
        listNega(arr.length, arr);

        
        // 3
        System.out.println("3. Max value in array: " + maxVal(arr.length, arr));


        // 4
        System.out.println("4. First positon of negative values: " + firstNeg(arr.length, arr));


        // 5
        System.out.println("5. Sum of values in array: " + sumArr(arr.length, arr));


        // 6
        sortAsc(arr.length, arr);
        System.out.print("6. Array sort in ascending order: ");
        outputArr(arr.length, arr);


        // 7
        int x;
        System.out.print("\n7. Enter x: ");
        x = scan.nextInt();
        arr = addFirst(arr.length, arr, x);
        System.out.print("\n7. Array with element add first position: ");
        outputArr(arr.length, arr);


        // 8
        arr = deleteFirstZero(arr.length, arr);
        System.out.print("8. Array with deleted first 0: ");
        outputArr(arr.length, arr);



        scan.close();

    }



    // 1

    static void inputArr(int n, int arr[]) {
        
        for(int i = 0; i < n; i++) {

            System.out.printf("Enter arr[%d]: ", i);
            arr[i] = scan.nextInt();
        }
        
        System.out.println();

    }

    static void outputArr(int n, int arr[]) {

        for(int i = 0; i < n; i++) {

            System.out.printf("%d ", arr[i]);
        }

        System.out.println();
    }


    // 2

    static void listNega(int n, int arr[]) {

        for(int i = 0; i < n; i++) {

            if (arr[i] < 0)
                System.out.printf("%d ", arr[i]);
        }
        
    }


    // 3

    static int maxVal(int n, int arr[]) {

        int max = 0;

        for(int i = 0; i < n; i++) {

            if (arr[i] > max)
                max = arr[i];
        }

        System.out.println();

        return max;

    }


    // 4
    
    static int firstNeg(int n, int arr[]) {

        for(int i = 0; i < n; i++) {

            if (arr[i] < 0)
                return i;

        }

        return 0;
    }


    // 5

    static int sumArr(int n, int arr[]) {

        int sum = 0;

        for(int i = 0; i < n; i++) {

            sum += arr[i];

        }

        return sum;
    }


    // 6

    static int[] sortAsc(int n, int arr[]) {

        int temp;

        for(int i = 0; i < n; i++) { 
        
            for (int j = 0; j < i; j++) {

                if (arr[i] < arr[j]) { 
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }

        return arr;
    }


    // 7

    static int[] addFirst(int n, int arr[], int x){

        int newArr[] = new int[n + 1];

        newArr[0] = x;

        for (int i = 0; i < n; i++) {
            newArr[i + 1] = arr[i];
        }

        return newArr;
    }


    // 8
    
    static int[] deleteFirstZero(int n, int arr[]) {

        int newArr[] = new int[n - 1];
        int position = -1, k = 0;

        for (int i = 0; i < n; i++) {

            if (arr[i] == 0) { 
                position = i;
                break;
            }
        }

        if (position == -1) 
            return arr;
        
        for (int i = 0; i < n; i++) {

            if (i == position)
                continue;
            
            else 
                newArr[k++] = arr[i];
                
            
        }

        return newArr;
    }

}