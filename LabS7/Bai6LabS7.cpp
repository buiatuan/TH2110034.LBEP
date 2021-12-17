#include <stdio.h>
int main(){
	int n;
	printf("Nhap kich thuoc mang n = ");
	scanf("%d",&n);
	int arr[n];
	int i=0;
	for(i=0;i<n;i++){
		printf("Nhap arr[%d]\t",i);
		scanf("%d",&arr[i]);
	}
	int count=0, max=0;
	for(i=0;i<n;i++){
		if(arr[i]>0){
			count++;
			if(count>max){
				max=count;
			}
		}else{
//			if(count>max){
//				max=count;
//			}
			count=0;
		}
	}
//	if(count>max){
//		printf("cac so duong lien tiep nhieu nhat la: %d",count);
//	}else{
//		printf("cac so duong lien tiep nhieu nhat la: %d",max);
//	}
	printf("so luong so duong lien tiep nhieu nhat la: %d\n",max);
	
}
