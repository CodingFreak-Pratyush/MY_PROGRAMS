#include <iostream>
using namespace std;

class student{
    private:
    int Gr_no;
    int percentage;

    public:
    string name;
    int age;
    string gender;

//We can create a Function to set values of DataMembers from Private
    void SetData(int a,int b){
        Gr_no=a;
        percentage=b;

    }
//We can create a Function to get values of DataMembers from Private

    void GetData(){
        cout<<Gr_no<<endl;
        cout<<percentage<<endl;
    }

};



int main(){
student a;
a.name="OM";
a.age=10;
a.gender="M";


student arr[3];
for (int i = 0; i < 3; i++)
{
    cout<<"Enter the name: "; 
    cin>>arr[i].name;
    cout<<"Enter the age: "; 
    cin>>arr[i].age;
    cout<<"Enter the gender: "; 
    cin>>arr[i].gender;
    
    int gr,per;
    cout<<"Enter Gr_no: ";
    cin>>gr;
    cout<<"Enter percentage: ";
    cin>>per;

   arr[i].SetData(gr,per);

   cout<<arr[i].name<<endl;
   cout<<arr[i].age<<endl;
   cout<<arr[i].gender<<endl;
   arr[i].GetData();



}




}