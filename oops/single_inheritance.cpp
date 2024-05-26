#include <iostream>
using namespace std;

class Base{

    int data1;
    public:
    int data2;
    void setdata(void){
        data1=10;
        data2=20;
    }

    int getdata1(){
        return data1;

    }

    int getdata2(){
        return data2;
    }



};


class Derived:public Base{

    public:
    int data3=data2*getdata1();

    void display(){
        cout<<data3;
    }


};


int main()
{

Derived der;
der.setdata();
der.display();

}