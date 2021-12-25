#include <stdio.h>

void ReverseArray(int ary[]){
	int n;
	for(int i=0;i<n;i++){
		int du=0,snd=0;
		while(n>0){
			du=ary[i]%10;
			snd=snd*10+du;
			ary[i]=ary[i]/10;			
		}
		ary[i]=snd;	
	}
	printf("Mang sau khi reverse: \n");
	
	for(int i=0;i<n;i++){
		printf("%d\t",ary[i]);
	}
}

int main(){
	int n;
	printf("Nhap size array:\n");
	scanf("%d",&n);
	int ary[n];
	for(int i=0;i<n;i++){
		printf("Nhap ary[%d]:\t",i);
		scanf("%d",&ary[i]);
	}
	ReverseArray(ary);

}

