#include <iostream>
using namespace std;

class student
{

    int fees;
    long int phone;

public:
    string name;
    int age;

    student()
    {
        cout << "default constructor";
    }

    student(string n, int a, int f, long int p)
    {
        name = n;
        age = a;
        fees = f;
        phone = p;
    }

    void setFees(int a)
    {
        fees = a;
    }

    void setPhone(long int b)
    {
        phone = b;
    }

    void PrintFees()
    {
        cout << "Fees of the student is : " << fees << endl;
    }

    void PrintPhone()
    {
        cout << "Phone number of the student is : " << phone << endl;
    }

    // Creating Friend Function to give permission to  updatePhone to access the data members inside the class
    friend void updatePhone(student &s, int new_phone);
};

// Made Function outside the class but this can't access the private data Members Directly to access the private data members we have to create freind function
void updatePhone(student &s, long int new_phone)
{

    s.setPhone(new_phone);
}

int main()
{

    student s1("ramesh", 17, 45000, 9023189198);

    s1.PrintFees();
    s1.PrintPhone();
    cout << s1.name;

    updatePhone(s1, 9601734609);

    s1.PrintPhone();
}