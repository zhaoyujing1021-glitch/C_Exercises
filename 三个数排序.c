/*@三个数排序：   
将9、3、6按从小到大的顺序输出。
*/

#include <stdio.h>

int main(void){
	int x=9,y=3,z=6;
	int temp;
	if(x>y){
		temp=x;
		x=y;
		y=temp;
	}
	if(x>z){
		temp=x;
		x=z;
		z=temp;
	}
	if(y>z){
		temp=y;
		y=z;
		z=temp;
	}
	printf("%d %d %d\n",x,y,z);
	return 0;
}