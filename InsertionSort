#include <stdio.h>

void insertionSort(int arr[], int n) {
    int i, key, j;

    // Iterate through the array
    for (i = 1; i < n; i++) {
        key = arr[i]; // Current element to be compared
        j = i - 1;

        // Move elements that are greater than key to one position ahead
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key; // Place the key in its correct position

        // Print the interim array after each insertion
        for (int k = 0; k < n; k++) {
            printf("%d ", arr[k]);
        }
        printf("\n"); // New line after printing the interim array
    }
}

int main() {
    int arr[] = {3, 1, 4, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Call the insertionSort function
    insertionSort(arr, n);

    // Print the final sorted array
    printf("Final sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
