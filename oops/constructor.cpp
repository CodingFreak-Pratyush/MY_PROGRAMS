#include <iostream>
using namespace std;

class student {
private:
    int Gr_no;
    int percentage;

public:
    string name;
    int age;
    string gender;

    // Default Constructor
    student() {
        cout << "Default Constructor\n";
    }

    // Parameterized Constructor
    student(int gr, string s) {
        Gr_no = gr;
        name = s;
    }

    // Copy Constructor
    student(student &s) {
        Gr_no = s.Gr_no;
        name = s.name;
        age = s.age;
        gender = s.gender;
        percentage = s.percentage;
    }

//The destructor is a special member function that is called automatically when an object goes out of scope or is explicitly deleted. 
//In this case, the destructor simply prints a message indicating that it has been called for which student object.
      ~student() {
        cout << "Destructor called for student " << name << endl;
    }

    void SetData(int a, int b) {
        Gr_no = a;
        percentage = b;
    }

    // Public member function to access Gr_no
    int GetGr_no() {
        return Gr_no;
    }


//Constructor overloading is a feature in C++ that allows a class to have more than one constructor, each with a different parameter list. 
//This enables creating objects in different ways depending on the parameters passed to the constructor. 
//In the provided code for the student class, there are two constructors:

    
};

int main() {
    student b(528, "Shyam");
    cout << "Name: " << b.name << endl;
    cout << "Grno: " << b.GetGr_no() << endl; // Accessing Gr_no using GetGr_no()

    student c(b); // Creating a copy of b
    cout << "Name (copy): " << c.name << endl;

    

    return 0;
}
