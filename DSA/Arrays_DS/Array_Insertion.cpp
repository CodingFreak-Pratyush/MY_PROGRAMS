#include <iostream>
#include <string>
using namespace std;
int main(){

    int n;
    cout<<"Enter Size of an array ";
    cin>>n;

    int arr[n];

    for (int t = 0; t < n; t++)
    {
        
    
    int i;
    cout<<"Enter the Index at which element is to inserted ";
    cin>>i;
    
    int element;
    cout<<"Enter The Element of an array ";
    cin>>element;

    arr[i]=element;
    }
}