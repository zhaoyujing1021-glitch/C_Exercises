/*@打印前五行：两边为 1，   
  内部等于上方相邻两数之和
*/

#include <stdio.h>

int main(void){
	int n;
	int a=1;
  scanf("%d",&n);
	for(int i=1;i<=n;i++){
		a *=i;
	}
	printf("%d ",a);
	return 0;
}