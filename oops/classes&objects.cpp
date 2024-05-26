//Classes are userdefined datatype
//Objects are instances of class

#include <iostream>
using namespace std;

class student{
//There are two types of access specifiers public and private
//By Default it is private we cant directly acess the data memebers of private
    private:
    int Gr_no;
    int percentage;

    public:
    string name;
    int age;
    string gender;

};

int main(){
//We can Access the data members by using . operator
student a;
a.name="OM";
a.age=10;
a.gender="M";

//We can store multiple instances by creating an object of array
student arr[3];
for (int i = 0; i < 3; i++)
{
    cout<<"Enter the name: "; 
    cin>>arr[i].name;
    cout<<"Enter the age: "; 
    cin>>arr[i].age;
    cout<<"Enter the gender: "; 
    cin>>arr[i].gender;
}

}