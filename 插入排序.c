
#include <stdio.h>

int main(void){
	int a[]={11,4,9,6,12,3,13};
	int n=sizeof(a)/sizeof(a[0]);
	for(int i=1;i<n;i++){
		int key =a[i];
		int j=i-1;
		while(j>=0&&a[j]>key){
			a[j+1]=a[j];
			j--;
		}	
		a[j+1]=key;
	}
	for(int k=0;k<n;k++){
		printf("%d ",a[k]);
	}
	return 0;
}