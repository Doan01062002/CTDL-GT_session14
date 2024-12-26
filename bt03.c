#include <stdio.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[10] = {4, 6, 2, 9, 3, 5, 8, 0, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Mang chua sap xep: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    bubbleSort(arr, n);

    printf("\nMang sau khi sap xep la: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

