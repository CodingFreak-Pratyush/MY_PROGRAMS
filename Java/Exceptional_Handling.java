package Java;

public class Exceptional_Handling {
    public static void main(String[] args) {
        int[] arr = { 10, 20, 30, 40 };
        try {
            System.out.println(arr[10]);
        } catch (Exception exception) {
            System.out.println("Error");
        }
    }
}
