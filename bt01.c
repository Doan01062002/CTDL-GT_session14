#include<stdio.h>

void lineSearch(int arr[], int value, int length){
	int temp = 0;
	for(int i=0; i<length; i++){
		if(arr[i] == value){
			printf("Gia tri %d o vi tri: %d", value, i);
			temp = 1;
		}
	}
	if(!temp){
		printf("Khong tim thay gia tri");
	}
}

int main(){
	int arr[5] = {1,2,3,4,5};
	int length = sizeof(arr);
	
	int value;
	printf("Vui long nhap gia tri can tim: ");
	scanf("%d",&value);
	printf("\n");
	
	lineSearch(arr,value,length);
	return 0;
}
