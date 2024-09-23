/*
BigO-  nlog(n)

[3 6 4 1 9 7]
Choose a pivot on the array 
[1 3 4] > pivot <= [6 7 9] if pivot = 6

Traditionally last element will be the pivot 
    pivot = 7
[3 6 4 1] > pivot <= [9 7]
[3 6 4 1 9 7]
 ^       ^ ^
Low / High = 9 / Pivot = 7
Current element < pivot
Check current element if greater than the pivot it will be moved past the pivots position
[3 6 4 1 7 9]
after finding a list where all numbers are < pivot 
return 7 & 9 back to the end of the array 

** If Pivot is the smallest number swap the index 0 with the pivot and move the old pivot out and
in the array **
    If smaller than pivot i gets interacted with / j is the only varaible being moved around the array
Ex: 
[8 9 3 1 6]
Pivot = 6
[8 9 3 1 6] -> j = 8  i= j-1 index
Arr[j] < Arr[pivot]
[8 9 3 1 6] -> Move j until j < pivot / i++ so mvoes to first index and swap j and i
i = 3 / j = 8
[3 9 8 1 6]
Continue without moving 3
[3 1 8 9 6]
Take Pivot and Posiiton in the center seperating the elements greater than and less than the pivot 
(At this point i = center so pivot swaps with i)
[3 1 6 9 8]
[3 1]     [9 8]
 ^ Pivot = 1 / j = 3 / i = j - 1
[9 8]
 ^ Pivot = 8 / j = 9 / i = j - 1
Merge the entire array
[1 3 6 8 9]

QuickSort- based on divide and conquer (portions out original array and connect into the sorted array)


*/