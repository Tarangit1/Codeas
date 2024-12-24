mport java.util.*;

public static void sumRowsAndColumns(int[][] array) {
    int rows = array.length;
    int cols = array[0].length;

    // Sum of each row
    for (int i = 0; i < rows; i++) {
        int rowSum = 0;
        for (int j = 0; j < cols; j++) {
            rowSum += array[i][j];
        }
        System.out.println("Sum of row " + (i + 1) + ": " + rowSum);
    }

    // Sum of each column
    for (int j = 0; j < cols; j++) {
        int colSum = 0;
        for (int i = 0; i < rows; i++) {
            colSum += array[i][j];
        }
        System.out.println("Sum of column " + (j + 1) + ": " + colSum);
        VVGG