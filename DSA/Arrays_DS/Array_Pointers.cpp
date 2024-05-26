#include <iostream>
#include <string>
using namespace std;

int main(){

//Pointers Stores address of an Variable
    int b=10;
    int *ptr; //Pointer Declaration
    ptr=&b; //Storing Address of variable b in pointer ptr
    //ptr=b    It is not valid  because we cant store value of variable in pointers we can only store address of variable
    cout<<*ptr<<endl; //Displaying Value of  ptr that is value of variable b 10
    cout<< &b<<endl; //Displaying address of variable b
    cout<<ptr<<endl; // Displaying value of pointer that is address of variable b
    cout<<&ptr<<endl; // Displaying address of pointer


    int arr[4]={10,20,30,40};
    int *ptr_array;
    ptr_array=arr; // This stores base address of an array that is address of 10

    cout<<ptr_array<<endl;//This will Display the address stored in ptr_array
    cout<<ptr_array+2<<endl;






}