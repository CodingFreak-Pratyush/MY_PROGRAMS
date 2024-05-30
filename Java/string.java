package Java;

public class string {
    public static void main(String[] args) {
        // String is a non primitive data type which is used to store complex values
        String name = "Aman";
        System.out.println(name);

        // Length Function in String
        System.out.println(name.length());

        // charAt Function : This returns character at index position
        System.out.println(name.charAt(0));

        // replace Function is used to old replace character with new character
        System.out.println(name.replace("a", "b"));

        // substring function returns the part of string it has starting index and
        // Ending Index as arguments
        String name1 = "Aman and Naman are Friends";
        System.out.println(name1.substring(0, 14));// starting index 0, ending index 13

    }
}
