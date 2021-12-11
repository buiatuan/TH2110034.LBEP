#include <stdio.h>
int main(){
	int n;
	do{
		printf("Nhap n= ");
		scanf("%d",&n);
	}while(n<1);
	
	if(n<=6){
		printf("khong co so nao thoa man");
	}else{
		int i=1;
		for(i=1;i<n;i++){
			int j=1, s=0;
			for(j=1;j<i;j++){
				if(i%j==0){
				s+=j;
				}
			}
			if(s==i){
				printf("%d la so hoan hao nho hon %d\n",i,n);
			}
		}
	}
}
