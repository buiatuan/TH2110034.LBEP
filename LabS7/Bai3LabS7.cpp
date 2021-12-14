#include <stdio.h>
int main(){
	int n;
		printf("Nhap n= ");
		scanf("%d",&n);
	
	int arr[n];
	int i=0;
	for(i=0;i<n;i++){
		printf("Nhap arr[%d]\t",i);
		scanf("%d",&arr[i]);
	}
	int x, count=0;
		printf("Nhap x= ");
		scanf("%d",&x);
	for(i=0;i<n;i++){
		if(x==arr[i]){
			count++;
		}
	}
	if(count>=1){
		printf("%d la gia tri trong mang",x);
	}else{
		printf("%d khong la gia tri trong mang");
	}
}
