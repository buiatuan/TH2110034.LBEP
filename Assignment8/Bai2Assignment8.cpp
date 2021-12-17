#include <stdio.h>
int main(){
	int n;
	printf("input array size: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		int flag=0;
		do{
			flag=0;
			printf("input value arr[%d]\t",i);
			scanf("%d",&arr[i]);			
			for(int j=0;j<i;j++){
				if(arr[i]==arr[j]){
					printf("re-");
					flag=1;
					break;	
				}				
			}
		}while(flag==1);
	}
	printf("array\n");
	for(int i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
}
