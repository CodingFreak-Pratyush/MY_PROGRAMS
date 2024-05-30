package Java.Basics;

import java.util.Scanner;

public class while_Loop {
    public static void main(String[] args) {
        System.out.println("Enter Number of Terms: ");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int i = 0;
        int sum = 0;
        while (i <= n) {
            sum = sum + i;
            i++;
        }

        System.out.println(sum);
        sc.close();
    }
}
