#include <iostream>
#include <string>
using namespace std;

int main(){

// Array Declaration During Compilation
int arr[20]={10,20,30,40,50};
cout<<arr[2]<<endl;

// Array Declaration During RunTime
int n;
cout<<"Enter the Size of an array";
cin>>n;
int arr1[n];

for (int  i = 0; i <n; i++)
{
    int element;
    cout<<"Enter the Element "<<i;
    cin>>element;
    arr1[i]=element;

}



for (int  i = 0; i <n; i++)
{

    cout<<arr[i]<<endl;


}



return 0;

}