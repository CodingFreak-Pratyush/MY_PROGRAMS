package Java;

import java.util.Arrays;

public class arrays {
    public static void main(String[] args) {
        // Array intialisation
        int[] arr = new int[3];
        arr[0] = 70;
        arr[1] = 20;
        arr[2] = 10;
        System.out.println(arr[2]);

        // printing length of an array
        System.out.println(arr.length);

        // Sorting an array : To sort an array we have to use Arrays Class in java and
        // import the package java.util.Arrays
        System.out.println(arr[0]);
        Arrays.sort(arr);
        System.out.println(arr[0]);

        // RunTime initialisation of an array
        int[] marks = { 10, 20, 30, 40, 50 };
        System.out.println(marks[0]);

        // intialsing 2D arrays
        int[][] matrixA = { { 10, 20, 30, 40, 50 }, { 60, 70, 80, 90, 100 } };
        System.out.println(matrixA[1][2]);

    }

}
