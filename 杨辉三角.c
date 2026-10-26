/*@打印前五行：两边为 1，   
  内部等于上方相邻两数之和
*/

#include <stdio.h>
int main(void){
	int a[5][5]={0};
	for(int i=0;i<5;i++){
		a[i][0]=1;//第一个是1
		a[i][i]=1;//最后一个是1
		for(int j=1;j<i;j++){
			a[i][j]=a[i-1][j-1]+a[i-1][j];
      //前一行的上前一个+前一行的上一个
		}
		for(int j=0;j<=i;j++){//这里是等于（否则第一行没有东西）
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}