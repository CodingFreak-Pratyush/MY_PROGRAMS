#include <iostream>
#include<cstdlib>
using namespace std;

struct node{

    int data;
    struct node *next;

};


void display_list(struct node* ptr){
    while (ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
    

}



struct node* delete_first(struct node*head){
    struct node*ptr;
    ptr=head;
    head=head->next;
    free(ptr);
    return head;
}
struct node* delete_At_Index(struct node*head,int index){
    struct node*p=head;
    struct node*q=head->next;
    int i=0;
    while (i!=index-1)
    {
        p=p->next;
        q=q->next;
        i++;
    }

   p->next=q->next;
   free(q);

   return head;


    
}
struct node* delete_At_End(struct node*head){
    struct node*p=head;
    struct node*q=head->next;
    int i=0;
    while (q->next!=NULL)
    {
        p=p->next;
        q=q->next;
        i++;
    }

   p->next=NULL;
   free(q);

   return head;   
}



struct node* delete_at_node(struct node*head,int value){
    struct node*p=head;
    struct node*q=head->next;
    int i=0;
    while (q->data!=value && q->next!=NULL)
    {
        p=p->next;
        q=q->next;
        i++;
    }

    if (q->data==value)
    {
        p->next=q->next;
        free(q);
    }
    

   

   return head;   
}






int main(){

    struct node*head;
    struct node*first;
    struct node*second;
    struct node*third;


    head=(struct node*)malloc(sizeof(struct node));
    first=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));


    head->data=7;
    head->next=first;
    first->data=8;
    first->next=second;
    second->data=9;
    second->next=third;
    third->data=10;
    third->next=NULL;

    cout<<"Before  Deletion "<<endl;
    display_list(head);

    // head=delete_first(head);
    // cout<<"After Deletion "<<endl;
    // display_list(head);


//    head= delete_At_Index(head,2);
//    cout<<"After Deletion "<<endl;
//    display_list(head);
  
//    head= delete_At_End(head);
//    cout<<"After Deletion "<<endl;
//    display_list(head);

delete_at_node(head,9);
cout<<"After Deletion "<<endl;
display_list(head);



    



}