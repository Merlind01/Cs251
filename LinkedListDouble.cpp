/*







*/
#include <iostream>
using namespace std;

    struct LinkedListDouble {
        int data;
        LinkedListDouble *prev;
        LinkedListDouble *next;
        LinkedListDouble(){}
        LinkedListDouble(int val) {
            this->data = val;
            this->prev=NULL;
            this->next=NULL;
        }
    };
    
LinkedListDouble* insertIntoPosition (LinkedListDouble* head,int val, int position)
{
    LinkedListDouble* newNode = new LinkedListDouble(val);
    LinkedListDouble* cur=head;
    int curPos = 1;

    while (cur!=NULL && curPos<position) {
            cur = cur->next;
            curPos++;
    }

    //Must deal with Cur(9)/cur->prev(4)/newNode(3)
    cur->prev->next= newNode;
    newNode->prev=cur->prev;
    cur->prev = newNode;
    newNode->next = cur;
}

int main()
{
    int pos = 2;
    LinkedListDouble* head = new LinkedListDouble(10);
    insertIntoPosition(head,6,pos);
    return 0;
}
