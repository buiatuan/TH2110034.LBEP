#include <stdio.h>
int main(){
	int n;
	printf("nhap n= ");
	scanf("%d",&n);
	
	int arr[n];
	int i, count=0;
	float s=0;
	for(i=0;i<n;i++){
		printf("Nhap arr[%d]",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		if(arr[i]%2!=0){
			count++;
			s+=arr[i];
		}
	}
	if(count!=0){
		printf("trung binh cong cac so le trong mang la: %f",s/count);
	}else{
		printf("Danh sach khong co so le nao ca");
	}
	
}
