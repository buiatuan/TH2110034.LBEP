#include <stdio.h>
int main(){
	int n;
	printf("Nhap n = ");
	scanf("%d",&n);
	
	int arr[n];
	int i=0;
	for(i=0;i<n;i++){
		printf("Nhap arr[%d]\t",i);
		scanf("%d",&arr[i]);
	}
	int min=arr[0];
	for(i=0;i<n;i++){
		if(arr[i]>0){
			min=arr[i];
			break;
		}
	}
	if(min<0){
		printf("mang toan so nguyen am");
	}else{
		for(i=0;i<n;i++){
			if(arr[i]<min&&arr[i]>0){
				min=arr[i];
			}
		}
		printf("so nguyen duong nho nhat trong mang la: %d",min);
	}
}
