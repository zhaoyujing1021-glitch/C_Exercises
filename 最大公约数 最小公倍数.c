#include <stdio.h>

// 最大公约数
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// 最小公倍数
int lcm(int a, int b) {
    if (a == 0 || b == 0) return 0;
    return (a / gcd(a, b)) * b; // 先除后乘，防止溢出
}

int main(void){
    int a,b;
    printf("数字1を入力して");
    scanf("%d",&a);
    printf("数字2を入力して");
    scanf("%d",&b);

    // 最大公约数
    printf("最大公约数=%d",gcd(a,b));
    // 最小公倍数
    printf("// 最小公倍数=%d",lcm(a,b));
    return 0;
}