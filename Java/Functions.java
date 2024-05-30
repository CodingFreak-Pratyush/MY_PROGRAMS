package Java;

public class Functions {

    // Function Declaration
    //Declaring Void Function
    public static void sum(int a , int b){

        
        System.out.println(a+b);

    }
// Function Which returns int data type
    public static int avg(int a, int b){
          return (a+b)/2;
    }
    public static void main(String[] args) {

        sum(4,5);
        int c=avg(9,4);
        System.out.println(c);
        
    }
}
