#include <iostream>
#include <cstdlib>
using namespace std;
struct Node{
    int data;
    struct Node* next;
};


void LinkedListTraversal(struct Node*Ptr){
    
    while(Ptr !=NULL){
    cout<<Ptr->data<<endl;
    Ptr=Ptr->next;}
}

struct Node *Insert_IN_Begnning(int data,struct Node*Head){
    struct Node* Ptr=(struct Node*)malloc(sizeof(struct Node));
    Ptr->data=data;
    Ptr->next=Head;

    return Ptr;
}

void Insert_At_Index(Node* Head,int data,int index){
        struct Node* Ptr=(struct Node*)malloc(sizeof(struct Node));
        Node* p=Head;
        int i=0;
        while(i!=index-1){
            p=p->next;
            i++;
        }
     Ptr->data=data;
     Ptr->next=p->next;
     p->next=Ptr;    

}


void insert_at_end(struct Node *head,int data){
    struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
    struct Node*p =head;
    int i=0;
    while(p->next=NULL){
        p=p->next;
        i++;
    }

    ptr->data=data;
    p->next=ptr;
    ptr->next=NULL;
    
}
void insert_at_node(int data,struct Node*previous){
    struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    ptr->next=previous->next;
    previous->next=ptr;
    
}





int main(){
    struct Node* head;
    struct Node* first;
    struct Node* second;
    struct Node* Third;

    head=(struct Node*)malloc(sizeof(struct Node));
    first=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    Third=(struct Node*)malloc(sizeof(struct Node));


    head->data=7;
    head->next=first;

    first->data=8;
    first->next=second;

    second->data=9;
    second->next=Third;

    Third->data=10;
    Third->next=NULL;



    LinkedListTraversal(head);
    // head=Insert_IN_Begnning(4,head);
    // LinkedListTraversal(head);

//    Insert_At_Index(head,4,2);
//    LinkedListTraversal(head);
//    insert_at_end(head,20);
//    LinkedListTraversal(head);

insert_at_node(27,second);
 LinkedListTraversal(head);

   
    





}