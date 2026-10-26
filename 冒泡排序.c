/*@比较相邻元素
  把数组从小到大排序
*/


#include <stdio.h>

int main(void){
	int a[5]={7,6,3,8,9};
	int n=sizeof(a)/sizeof(a[0]);
	int temp;
	for(int i=0;i<n-1;i++){ //n-1重要！！！(不能对比最后一个)
    for(int j=0;j<n-i-1;j++){ //n-i-1重要！！
      if(a[j]>a[j+1]){//用j比较！！
        temp=a[j]; 
        a[j]=a[j+1];
        a[j+1]=temp;
      }
    }
	}
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");

	return 0;
}