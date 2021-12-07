#include <stdio.h>

int main(){
	
	int n;
	printf("nhap gia tri n = ");
	scanf("%d",&n);
	int i=0;
	
	if(n>0){
		while(i<=n){
			printf("so chan: %d\n",i);
			i+=2;
		}
		
	}else{
		printf("Error");
	}
}
