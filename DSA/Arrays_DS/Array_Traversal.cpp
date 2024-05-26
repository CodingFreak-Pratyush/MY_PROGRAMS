#include <iostream>
#include <string>
using namespace std;
int main(){

    int arr[10]={10,20,30,40};
    int num_of_ele = sizeof(arr)/4;
    for (int i = 0; i < num_of_ele; i++)
    {
        cout<<arr[i]<<' ';
    }
    
     

}