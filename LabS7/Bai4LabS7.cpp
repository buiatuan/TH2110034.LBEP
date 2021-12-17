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
	int a=0;
	for(i=0;i<n;i++){
		if(arr[i]%2!=0){
			a=arr[i];
		}
	}
	if(a==0){
		printf("mang khong co so le");
	}else{
		printf("so le cuoi cung cua mang: %d\t",a);
	}
	
}
