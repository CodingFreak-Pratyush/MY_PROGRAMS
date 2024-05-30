package Java;

public class casting {
    public static void main(String[] args) {

        // Double stores 4 bytes if we add int datatype to it .It will not give any
        // error
        double price = 100.00;
        double Final_Price = price + 18;
        System.out.println(Final_Price);
        // But if we add Double to to int we will get error so we explicitly typecast
        // double to int
        int marks = 80;
        int FinalMarks = marks + (int) 70.00;
        System.out.println(FinalMarks);

    }

}
