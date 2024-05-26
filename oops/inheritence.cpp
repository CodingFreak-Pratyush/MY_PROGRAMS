// The concept of reusability in C++ is supported using inheritance.
// We can reuse the properties of an existing class by inheriting it and deriving its properties.
// The existing class is called the base class and the new class which is inherited from the base class is called the derived class.
#include <iostream>
using namespace std;

class employee
{

public:
    string name;
    int age;
    int id;

    employee()
    {
    }
    employee(string n, int a, int i)
    {
        name = n;
        age = a;
        id = i;
    }
};

/*
Derived Class syntax
class derived_class_name : access_modifier base_class_name
 {
     body of the derived class
 }

Note:
1.Default Visibility Mode is Private
2.Public Visibility Mode:Public Members of the base class becomes public members of derived class
3.Private Visibility Mode:Public Members of the base class becomes private members of derived class
4. Private Members are never inherited

 */

class programmer : public employee
{

public:
    string designation;
    int salary;

    programmer(string n, int a, int i, string d, int s)
    {

        name = n;
        age = a;
        id = i;
        designation = d;
        salary = s;
    }
};

int main()
{

    programmer p1("ramesh", 25, 101, "front-end Developer", 1200000);
    cout << p1.name;
}
