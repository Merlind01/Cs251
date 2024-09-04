/*
Linked Lists

    Array [1,2,3,4,5]
        Index of 4 (0-4)
        Size of 5 (1-5)
    Arrays are static meaning you cannot change the size when it has been made

        Object-Oriented Programing (Not important in data structures) / (Basic Review)
        - Object is instanciation of a class
        ex - 
        class Shape {
            int length;
            double radius;
            int height;
        }
        fucntion Area ( );

        ex 2 -
        class Student {
            int age;
            int id;
            string major;
            string name;
        }

class LinkedList {
    int data;
    LinkedList* next;
    LinkedList();
    LinkedList(int val);
}

int array [1,5,6,7,9]
LinkedList => [1|Next]->[5|Next]->[6|Next]->[7|Next]->[9|Next]->[Null]
        (First Node is classified as the head)
        (integer = data / "Next" is the pointer to the next node)
    
Arrays vs Linked List

Arrays - Fixed size, inserations and deletions are inefficient, No Memory waste, Sequential access is faster,
    Random access i.e efficent indexing
Linked List - Dynamic Size, inserations and deletions are efficient, Since memory is allocated dynamically there is now waste,
    Sequential access is slow, No random access

Types of Linked List 
    - Single Linked List - One Direction
    - Double Linked List - Can go back and forward
    - Circular Linked List

What operations can you perform on a single linked list
    - Traversal
    - Insertion 
        Insert at the beginning of the linked list (The node that is inserted is the new Head)
    - Applications
    - Deletion
*/



#include <iostream>
using namespace std;


struct LinkedList{
    int data;
    LinkedList* next;
    LinkedList(){}
    LinkedList(int val)
    {
        this->data=val;
        this->next=NULL;
    }
};


LinkedList* insertIntoHead(LinkedList* head, int data){
    LinkedList* newNode=new LinkedList(data);
    newNode->next=head;
    head=newNode;
    return head;
}


LinkedList* insertIntoPosition(LinkedList* head, int data,int position){
    LinkedList* newNode=new LinkedList(data);
    LinkedList* prev=NULL;
    LinkedList* cur=head;
    int currentPosition=1;

    while(cur!=NULL && position!=currentPosition){
        prev=cur;
        cur=cur->next;
        currentPosition++;
    }
    
    newNode->next=cur;
    if(prev!=NULL) prev->next=newNode;
    else head=newNode;
    return head;
}

int getLinkedListLength(LinkedList* head)
{
    int length=0;
    while(head!=NULL){
        length++;
        head=head->next;
    }
    return length;
}

void FindPos(LinkedList* head, int Position)
{
    LinkedList* curNode = head;
    int tempnum = 1;
    while (curNode->next != NULL && tempnum != Position) {
        curNode = curNode->next;
        tempnum++;
    }
    cout<<curNode->data;
}

LinkedList* insertIntoEnd(LinkedList* head, int val){
    LinkedList* newNode=new LinkedList(val);
    LinkedList* curNode = head;
    while (curNode->next != NULL) {     //Check for last node
        curNode = curNode->next;
    }
    curNode->next =newNode;     //set NUll as new node

    return head;
}

void displayAllNodes(LinkedList* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

int main()
{
    int Position;

    LinkedList* head=new LinkedList(10);
    head=insertIntoHead(head,5);
    head=insertIntoHead(head,7);
    head=insertIntoHead(head,11);
    head=insertIntoHead(head,24);
    displayAllNodes(head);
    head=insertIntoEnd(head, 3);      //Insert at end 
    displayAllNodes(head);             // Check if inserted at end
    head=insertIntoPosition(head,3,1);
    displayAllNodes(head);
    cin>>Position;
    FindPos(head,Position);
    cout<<endl;
    return 0;
}
