#include <iostream>
#include <string>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of an array";
    cin>>size;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        
    
    
    
    int element;
    cout<<"Enter The Element of an array at index "<<i<<" ";
    cin>>element;

    arr[i]=element;
    }

    int index;
    cout<<"Enter the index at which you want to delete the item ";
    cin>>index;

    if(index<0|| index > size){
        cout<<"Enter the Valid index of an array";
    }

    else{

        for(int i=index;i<size-1;i++){
            arr[i]=arr[i+1];
        }

        size--;
    }

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<' ';
    }
}