package Java.Basics;

import java.util.Scanner;

public class Input {
    public static void main(String[] args) {
        // Creating Scanner Object to take input
        // Taking Integer as an input from user
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter your age ");
        int age = sc.nextInt();
        System.out.println(age);

        // Taking Float as an input from user
        System.out.println("Enter your Percentage");
        float percentage = sc.nextFloat();
        System.out.println(percentage);

        // Taking String as an input from user
        System.out.println("Enter your Text:");
        String Text = sc.nextLine();
        System.out.println(Text);
        sc.close();

    }

}
