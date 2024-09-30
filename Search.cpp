/* 
Search 
    - Linear O(n)
    - Binary O(

arr = [7 3 4 9 2 8]      Key = 5
length = 6
index = 5

    For Linear Seach Code

int LinearSearch (int[] arr, int Key) {
for (int i = 0; i<arr.length, i++) {
    if (arr[i] == key) 
    return i;
}
  return -1; //Key was not found
}



m = (l+r)/2  // to find middle left are right node indexs divided by 2 
m = 7 //in a 14 length arr

// since key>arr[m] then the left side of the array is not needed 
l = m + 1;

m = (l+r)/2  // find  a new middle 
// next middle is check if == to key OR arr[m] > key OR arr[m] < key
// repeated until arr[m] == key


    For Binary Search Code   (Must be Sorted for Optimum time)

int BinarySearch (int[]arr, int key)      key = 13; 
{
int n = array.length
int l = o, r = n-1;
while (l<=n) {
int m = (l+r)/2
  if (arr[m] < key) 
  l = m+1
  else if (arr[m] > key)
  r = m - 1
  else
  return m
}
return -1 // not in array
}





*/
