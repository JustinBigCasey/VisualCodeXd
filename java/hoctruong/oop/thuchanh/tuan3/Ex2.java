
public class Ex2 {

    public static void main(String[] args) {

        int[][] arr1 = {
            {1, 3, 2},
            {4, 5, 7},
            {1, 6, 4}
        };

        int[][] arr2 = {
            {3, 5, 6},
            {1, 2, 0},
            {9, 8, 7}
        };

        int[][] addMatrix = addMatrix(arr1, arr2);
        int[][] mulMatrix = mulMatrix(arr1, arr2);

        System.out.println("Add Matrix: ");
        printMatrix(addMatrix);

        System.out.println("Multiply Matrix: ");
        printMatrix(mulMatrix);

    }

    public static int[][] addMatrix(int[][] arr1, int[][] arr2) {

        if (arr1.length != arr2.length) {
            return null;
        }

        int row = arr1.length;
        int col = arr1[0].length;

        int[][] sumMatrix = new int[row][col];

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                sumMatrix[i][j] = arr1[i][j] + arr2[i][j];
            }
        }

        return sumMatrix;

    }

    public static int[][] mulMatrix(int[][] arr1, int[][] arr2) {

        if (arr1.length != arr2.length) {
            return null;
        }

        int row = arr1.length;
        int col = arr1[0].length;

        int[][] mulMatrix = new int[row][col];

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                mulMatrix[i][j] = arr1[i][j] * arr2[i][j];
            }
        }

        return mulMatrix;

    }

    public static void printMatrix(int[][] matrix) {

        for (int i = 0; i < matrix.length; i++) {
            for (int j = 0; j < matrix[0].length; j++) {
                System.out.print(matrix[i][j] + "\t");
            }
            System.out.println();
        }

    }

}
