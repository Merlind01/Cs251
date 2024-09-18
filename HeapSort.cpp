/*
The Concept of Heap is more important than HeapSort Itslef

Heap sort is a comparision-based sorting technique nased on Binary Heap Data Structure. (max and min)

Arr = [3 8 2 9 1 4]
Heap is a tree type of data structure

                (3)         -          Each Node/Number has two childs (Binary Tree)
                /   \
              (8)    (2)
              / \    /
            (9) (1) (4)


i - Index (0)
2i + 1 - left
2i + 2 -right

         0 1 2 3 4 5
array - [3 8 2 9 1 4]

Order of placing nodes **
Index
Left to Right than when changing levels Back to the Left most

From Tree Need to Do Heapify
Heapify - Swapping Parents and children following the Rule of Max Heap
    Max Heap - Parent will always be greater than its children
        Compare Children First to see which node would be best to take the position of the parent
Ex:
                (3)
                /   \
              (8)    (2)        Initial Array
              / \    /
            (9) (1) (4)

                (3)
                /   \
              (9)    (2)        - 9 and 8 Swapped
              / \    /
            (8) (1) (4)

                (3)
                /   \
              (9)    (4)        - 2 and 4 Swapped
              / \    /
            (8) (1) (2)

                (9)
                /   \
              (3)    (4)    - 9 and 3 Swappded
              / \    /
            (8) (1) (2)
            
                (9)
                /   \
              (8)    (4)    - 8 and 3 Swappded
              / \    /
            (3) (1) (2)

            Heapify Done

When Placing Back into the array 
The Top node gets moved back to the end of the array and the node in the lowest level and 
    Right-most side takes its place
- Heapify Starts again and the process continues until the tree is empty 

[1 2 3 4 8 9] - gets placed into the array from right to left 

1. Array --> Tree

2. Tree --> Max Heap  (Using Heapify)

4. Extract the max from Root

5. Heapify the Tree Again until empty
*/
#include <iostream>
using namespace std;

int main()
{
    
    




    return 0;
}
