/*
Sorting: an operation that rearranges unordered items into ordered itmes according to a specified
criteria

A = [1,2,4,3]   Unsorted
A = [1,2,3,4]   Sorted

By default code should be sorted in ascending order

Types of sorting algorithms (* Have to Know Well)
*    -Bubble Sort           -Quick Sort
*    -Selection Sort        -Counting Sort
*    -Insertion Sort
     -Merge Sort
     -Heap Sort
                     Time and Space Complexity varies 
    Selection Sort = n^2
    Insertion Sort = n^2
    Merge Sort = n log(n)
    Quick Sort = n log(n)
    Counting Sort = n

Bubble Sort 
    - Bubble up the highest value (ascending order)
    - Ascending order: low values to right values (left to right)
    Case 1:
    [4] [1]
        Bubble up [4] to the place of 1 (by checking than moving up or going to the other pair)
    [1] [4]

    Stable Sort
        - A stable sort keeps equal elements in the same order
        - This may matter when you are sorting data according to some characteristics 
        - Ex: sorting students by test scores

    Unstable Sort
        - An Ubstabe sort may or may not keep equal elements in the same order

Selection Sort
    - Place the minimum value on the left side first 
    Case 1: 
        2 9 3 7 1
            Set 2 as temp minimum index go until last index (index 4) and swap 1 and 2
        1 9 3 7 2      -> 1 is done and doesnt have to go through the array to check
            set temp minimum to index 1 and repeat until array is sorted
        1 2 3 9 7 -> 2 is done
            when searching through array the seconded lowest int was 2 so 9 and 2 swap
        1 2 3 9 7 ->after a pass 3 is done
        1 2 3 7 9 ->array is sorted
    Time Complexcity - n^
    Space Complexcity - 1/constant (the array needed for the code to run)

Insertion Sort 
    - Find a starting value then locate each of their postion starting from the 
        integers in the 2nd Index of the of the array
    - ** Integers are not getting swapped but shifted
    Case 1:
        7 2 5 3 -> Compare 7 and 2 and find the position that works best to sort
        2 7 5 3 -> Move 5 in front of 7 
        2 5 7 3 -> Move 3 in front of 2 
        2 3 5 7
    



*/
