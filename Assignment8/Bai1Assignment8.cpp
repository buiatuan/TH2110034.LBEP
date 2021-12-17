#include <stdio.h>
int main(){
	int n;
	printf("input array size: ");
	scanf("%d",&n);
	//input array
	int arr[n];
	for(int i=0;i<n;i++){
		printf("input arr[%d]\t",i);
		scanf("%d",&arr[i]);
	}
	int x;
	printf("input seach value:\t");
	scanf("%d",&x);
	//bubble sort
	int temp,i=0,j=0;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(arr[j+1]<arr[j]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	//binary search
	int low=0, hi=n-1, flag=0, mid;
	while(low<=hi){
		mid=(low+hi)/2;
		if(x==arr[mid]){
			flag=1;
//			printf("found at index: %d\t",mid);
			break;
		}else if(x>arr[mid]){
			low=mid+1;
		}else if(x<arr[mid]){
			hi=mid-1;
		}
	}
	if(flag==1||x<arr[mid]){
		printf("search value:\t %d",arr[mid-1]);
	}else if(x>arr[mid]){
		printf("search value:\t%d",arr[mid]);
	}
}
