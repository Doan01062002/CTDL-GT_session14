#include<stdio.h>

void selectSort(int arr[], int n){
	for(int i=0; i<n;i++){
		int min = i;
		for(int j=i+1; j<n; j++){
			if(arr[min] > arr[j]){
				min = j;
			}
		}
		int temp = arr[min];
		arr[min] = arr[i];
		arr[i] = temp;
	}
}

int main(){
	int arr[10] = {4, 6, 2, 9, 3, 5, 8, 0, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Mang chua sap xep: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    selectSort(arr, n);

    printf("\nMang sau khi sap xep la: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
	return 0;
}
