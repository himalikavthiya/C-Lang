#include <stdio.h>

int main() {
    int arr[100], n, i, largest, second_largest;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: \n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    largest = arr[0];
    second_largest = arr[1];

    if (second_largest > largest) {
        largest = arr[1];
        second_largest = arr[0];
    }

    for (i = 2; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }

    printf("The second largest element in the array is: %d", second_largest);

    return 0;
}
