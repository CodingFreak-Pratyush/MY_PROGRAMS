//In a linked list, each container is like a node, 
//and it holds two things: the actual data (like a number or a word) 
//and the address of the next container in line. 
//So, if you want to find something, 
//you start at the beginning of the list and follow the addresses until you reach the right container. 
//Think of it like a chain where each link knows where the next link is, 
//helping you navigate through the list.

//Singly Linked List: In this type, each node points only to the next node in the sequence. It's like a chain where each link connects to the next one, but not backward.

//Doubly Linked List: In a doubly linked list, each node has two pointers: one pointing to the next node and another pointing to the previous node. This allows for traversal in both forward and backward directions.

//Circular Linked List: In a circular linked list, the last node points back to the first node, forming a loop. This means there's no "end" to the list, and traversal can start from any point.

//Sorted Linked List: This type maintains its elements in sorted order, usually ascending or descending. When inserting a new element, it finds the right position to keep the list sorted.

//Unrolled Linked List: This is a variation where each node holds more than one element. It's useful for scenarios where the elements are small, and keeping them in arrays within each node can reduce memory overhead.

#include<iostream>
#include <cstdlib>
using namespace std;

struct node{
    int data;
    struct node*next;
};

void LinkedListTraversal(struct node* ptr){

    while(ptr !=NULL){
        cout<<ptr->data;
        ptr=ptr->next;
    }
}



int main(){


    struct node* head;
    struct node* second;
    struct node* third;


    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));

    head->data=7;
    head->next=second;

    second->data=8;
    second->next=third;

    third->data=9;
    third->next=NULL;
    

LinkedListTraversal(head);

return 0;

}