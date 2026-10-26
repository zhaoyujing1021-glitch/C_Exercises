/*@找出所有三位数
  各位数字的立方和等于它本身
*/

//%-2d 至少占两个格

#include <stdio.h>

int main(void){
  int n;
  for(int n=100;n<=999;n++){
    int a=n/100;//百位数
    int b=n/10%10;//十位数
    int c=n%10;//个位数
    if(a*a*a+b*b*b+c*c*c==n){
      printf("%d ",n);
    }
  }
  printf("\n");
  return 0;
}