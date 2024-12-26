#include<stdio.h>

int binarySearch(int arr[], int low, int high, int target){
	if(low>high){
		return -1;
	}
	
	int mid = low + (high - low)/2;
	if(arr[mid] == target){
		return mid;
	}else if(arr[mid] > target){
		return binarySearch(arr, low, mid-1, target);
	}else{
		return binarySearch(arr, mid +1, high, target);
	}
}

int main(){
	
	int arr[8] = {1,2,3,4,5,6,7,8};
	int high = sizeof(arr) / sizeof(arr[0]) - 1;
	
	int target;
	printf("Vui long nhap gia tri can tim: ");
	scanf("%d", &target);
	printf("\n");
	
	int temp = binarySearch(arr, 0, high,target);
	
	if(temp != -1){
		printf("Gia tri %d o vi tri %d", target, temp);
	}else{
		printf("Khong tim thay gia tri trong mang");
	}
	
	return 0;
}
