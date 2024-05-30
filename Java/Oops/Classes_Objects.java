package Java.Oops;

class Student{

    String name;
    long phone;
    int age;

    public void printname(){
        System.out.println(name);
    }

    public void printphone(){
        System.out.println(phone);
    }

    public void printage(){
        System.out.println(age);
    }
    

    


};

public class Classes_Objects {
    public static void main(String[] args) {

        Student s1=new Student();
        s1.name="Rahul";
        s1.age=18;
        s1.phone=9601734609L;

        s1.printname();
        s1.printage();
        s1.printphone();



        
    }
    
}
