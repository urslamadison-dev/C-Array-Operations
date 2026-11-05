
#include <stdio.h>

#define MAX 1000

int main() {
    int arr[MAX];
    int n, value, position, i;

    // Create an array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    if (n < 1 || n >= MAX) {
        printf("Invalid array size!\n");
        return 1;
    }

    printf("Enter %d array elements:\n", n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Display original array
    printf("Original array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Insert a value
    printf("\nEnter value to insert: ");
    scanf("%d", &value);

    printf("Enter position to insert (1 to %d): ", n + 1);
    scanf("%d", &position);

    if (position < 1 || position > n + 1) {
        printf("Invalid position!\n");
        return 1;
    }

    for (i = n; i >= position; i--) {
        arr[i] = arr[i - 1];
    }

    arr[position - 1] = value;
    n++;

    printf("Array after insertion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Delete a value
    printf("\nEnter position to delete (1 to %d): ", n);
    scanf("%d", &position);

    if (position < 1 || position > n) {
        printf("Invalid position!\n");
        return 1;
    }

    for (i = position - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;

    printf("Array after deletion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
