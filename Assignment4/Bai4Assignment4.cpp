#include <stdio.h>

int main(){
	int n;
	printf("Nhap n= ");
	scanf("%d",&n);
	int count=0;
	
	for(int i=1;i<=n;i++){
		if(n%i==0){
			count++;
		}
	}
	if(count==2){
		printf("%d la so nguyen to",n);
	}else{
		printf("%d khong phai la so nguyen to",n);
	}
	
}
