#include <stdio.h>
int main(){
	int n;
	do{
		printf("nhap n = ");
		scanf("%d",&n);
	}while(n==0);
	
	int s=0;
	
	for(int i=1;i<=n;i++){
		if(n%i==0){
			s+=i;
			printf("%d la uoc cua: %d\n",i,n);	
		}else{
			
		}
	}
	printf("tong cac uoc la: %d\n",s);
}
