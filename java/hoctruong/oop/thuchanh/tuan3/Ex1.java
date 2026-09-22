
public class Ex1 {

    public static void main(String[] args) {

        int[] array = {5, 11, 11, 2, 6, 7, 9, 11, 2, 4};

        // System.out.println(removeFirst(array, 9));
        // System.out.println(removeFirst(array, 11));
        // array = insertPos(array, 1, 4);
        // array = findDuplicate(array);
        array = removeDup(array);

        for (int i = 0; i < array.length; i++) {
            System.out.print(array[i] + " ");
        }
    }

    public static boolean removeFirst(int[] array, int target) {
        int index = -1;

        for (int i = 0; i < array.length; i++) {

            if (array[i] == target) {
                index = i;
                break;
            }
        }

        if (index == -1) {
            return false;
        }

        for (int j = index; j < array.length - 1; j++) {
            array[j] = array[j + 1];
        }

        array[array.length - 1] = 0;

        return true;

    }

    public static int[] insertPos(int[] array, int target, int insert) {

        int temp = array[target];
        int temp2 = 0;

        array[array.length - 1] = array[array.length - 2];

        array[target] = insert;

        for (int i = target + 1; i < array.length; i++) {
            temp2 = array[i];
            array[i] = temp;
            temp = temp2;
        }

        return array;
    }

    public static int[] findDuplicate(int[] array) {

        boolean add;
        int count = 0;
        int[] checkArray = new int[array.length];

        for (int i = 0; i < array.length; i++) {

            add = false;

            for (int j = 0; j < i; j++) {
                if (array[i] == array[j]) {
                    add = true;
                    break;
                }
            }

            if (!add) {
                for (int j = i + 1; j < array.length; j++) {
                    if (array[i] == array[j]) {
                        checkArray[count++] = array[i];
                        break;
                    }
                }
            }
        }

        int[] dupArray = new int[count];

        for (int i = 0; i < count; i++) {
            dupArray[i] = checkArray[i];
        }

        return dupArray;
    }

    public static int[] removeDup(int[] array) {

        boolean add;
        int count = 0;
        int[] checkArray = new int[array.length];

        for (int i = 0; i < array.length; i++) {

            add = false;

            for (int j = 0; j < i; j++) {
                if (array[i] == array[j]) {
                    add = true;
                    break;
                }
            }

            if (!add) {
                checkArray[count++] = array[i];
            }
        }

        int[] removeDupArray = new int[count];

        for (int i = 0; i < count; i++) {
            removeDupArray[i] = checkArray[i];
        }

        return removeDupArray;

    }

}
