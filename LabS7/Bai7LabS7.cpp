#include <stdio.h>
int main(){
	int n;
	printf("Nhap kich thuoc mang n= ");
	scanf("%d",&n);
	int arr[n];
	int i=0;
	for(i=0;i<n;i++){
		printf("Nhap arr[%d]\t",i);
		scanf("%d",&arr[i]);
	}
	int s=0, max=0;
	for(i=0;i<n;i++){
		if(arr[i]>0){
			s+=arr[i];
			if(s>max){
				max=s;
			}
		}else{
//			if(s>max){
//				max=s;
//			}
			s=0;
		}	
	}
//	if(s>max){
//		printf("Tong chuoi so duong lon nhat la: %d",s);
//	}else{
//		printf("Tong chuoi so duong lon nhat la: %d",max);
//	}
	printf("tong cac phan tu trong chuoi duong lon nhat la: %d",max);
}
