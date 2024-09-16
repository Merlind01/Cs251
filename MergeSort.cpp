/*
Time Complexity nlog(n)
    - Every tree of merge sort will have log(size of array)

Space Complexity O(n)


Inital Array - [2 8 6 3 1 7]
    Start by the middle of the array and seperate
    [2 8 6] [3 1 7]
    Seperate again
    [2] [8 6]   [3] [1 7]
    Seperate
    [2] [8] [6] [3] [1] [7]
    When all Seperated, Merge a 2 sets of 2 values ([2 8] and [1 7]) and check if they are sorted
    Have 2 pointers I and J and set them to the smallest value in each set of 2 arrays. Merge the arrays 
    by comparing the values on the pointer and setting the smaller value to the start of the array set the
    pointer to the next value and continue until a set of 4 array is made
    Continue the concept with the rest of the initial array

    [2] [8] [6] [3] [1] [7]
    [2 8] [1 7]
    [1 2 7 8]   [3 6]
    [1 2 3 6 7 8]

Divide First than merge 

Merge                                  Divide
[7] [2 3] [9] [1 5]                [7 2 3 9 1 5]
  [2 3 7] [1 5 9]                [7 2 3]     [9 1 5]    
   [1 2 3 5 7 9]             [7] [2] [3]     [9] [1] [5]
                                      Now Merge

Divide Code Explained

    static void sort(int arr[], int l, int r) {

    }
* Set R to be greater than L / L is leftside of array R is rightside of array *

when finding the middle by
m = (L+R)/2 
It has a possible chance of an Overflow error 
Must find middle by 
L + (R-L)/2         -> No chance of Overflow error

sort first and second halves 
sort(arr, l, m)
sort(arr, m+1, r)

merge the sorted halves 
merge(arr, l, m, r)

Merge Code explained

    static void merge(int arr[], int l, int m, int r) {
        
    }
    Finding Sizes of 2 sub-arrays 
set n1 = m-l+1
set n2 = r-m
[2 5 8]     [6 9]
   L          R
Using the array 
n1 = 2-0+1 = 1
n2 = 4-2 = 2
            ** Using Index of array

Create 2 temp arrays 
int L[] = new int [n1]
int R[] = new int[n2]

Copy data to temp arrays than Merge 

*/
#include <iostream>
using namespace std;

    static void sort(int arr[], int l, int r) {

    }
    static void merge(int arr[], int l, int m, int r) {

    }

int main()
{
    
    return 0;
}

