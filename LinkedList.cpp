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