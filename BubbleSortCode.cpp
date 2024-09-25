#include <stdio.h>
#include <stdbool.h>

int* countSwaps(int a[], int n) {
    int i, j, temp;
    bool swapped; // Boolean to track if any swaps occurred

    // Perform Bubble Sort
    for (i = 0; i < n - 1; i++) {
        swapped = false; // Reset swapped for each pass
        for (j = 0; j < n - 1 - i; j++) {
            // Compare adjacent elements
            if (a[j] > a[j + 1]) {
                // Swap if they are in the wrong order
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                swapped = true; // Set swapped to true
            }
        }
        // If no swaps occurred, array is sorted
        if (!swapped) {
            break; // Exit the loop early
        }
    }
    
    return a; // Return the sorted array
}
int main() {
    int arr[] = {3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int* sortedArr = countSwaps(arr, n);
    
    // Output the sorted array
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", sortedArr[i]);
    }
    printf("\n");
    
    return 0;
}
