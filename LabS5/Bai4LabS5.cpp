#include <stdio.h>
int main(){
	int n;
	do{
		printf("Nhap n= ");
		scanf("%d",&n);
	}while(n<=2);
	int  a=2;
	
	for(a=2;a<n;a++){
		int i=1, count=0;
		for(i=1;i<=a;i++){
			if(a%i==0){
				count++;
			}
		}
		if(count==2){
			printf("so nguyen to la: %d\n",a);
		}
	}
}
