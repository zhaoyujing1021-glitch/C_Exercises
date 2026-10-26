#include <stdio.h>

int main(void){
	int a[]={11,4,9,6,12,3,13};
	int n=sizeof(a)/sizeof(a[0]);
	for(int i=1;i<n-1;i++){
    int min=i;
    for(int j=i+1;j<n;j++){
      if(a[j]<a[min]){
        min=j;
      }
    }
		if(min !=i){
      int tmp = a[i];
      a[i] =a[min];
      a[min]=tmp;
    }
	}
	for(int k=0;k<n;k++){
		printf("%d ",a[k]);
	}
	return 0;
}