#include <stdio.h>

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr[], int low, int high, int target) {
    if (low > high) {
        return -1;
    }
    int mid = (low + high) / 2;
    if (arr[mid] == target) {
        return mid;
    } else if (arr[mid] > target) {
        return binarySearch(arr, low, mid - 1, target);
    } else {
        return binarySearch(arr, mid + 1, high, target);
    }
}

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];
    printf("Nhap cac phan tu cua mang: \n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nMang ban dau: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    insertionSort(arr, n);

    printf("\nMang sau khi sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    int target;
    printf("\n\nNhap gia tri can tim: ");
    scanf("%d", &target);

    int linearResult = linearSearch(arr, n, target);
    if (linearResult != -1) {
        printf("Tim thay gia tri %d bang Linear Search o vi tri %d.\n", target, linearResult);
    } else {
        printf("Khong tim thay gia tri %d bang Linear Search.\n", target);
    }

    int binaryResult = binarySearch(arr, 0, n - 1, target);
    if (binaryResult != -1) {
        printf("Tim thay gia tri %d bang Binary Search o vi tri %d.\n", target, binaryResult);
    } else {
        printf("Khong tim thay gia tri %d bang Binary Search.\n", target);
    }

    return 0;
}

