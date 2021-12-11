#include <stdio.h>
int main(){
	int a,b;
	do{
		printf("nhap a= ");
		scanf("%d",&a);
		printf("Nhap b= ");
		scanf("%d",&b);
	}while(a>b);
	
	int i=a;
	
	for(i=a;i<=b;i++){
		int j=2, count=0;
		for(j=2;j<=i/2;j++){
			if(i%j==0){
				count++;
				break;
			}
		}
		if(count==0){
			printf("SNT trong khoang la %d\n",i);
		}
	}
}
