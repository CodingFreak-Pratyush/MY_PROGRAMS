package Java;

import java.util.Scanner;

public class For_Loop {
    public static void main(String[] args) {
        System.out.println("Enter the Number of Terms");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        int sum = 0;
        for (int i = 0; i <= n; i++) {
            sum = sum + i;
        }

        System.out.println(sum);

        sc.close();
    }
}
