#include <stdio.h>
#include <stdbool.h>

// 质数判定函数：若 n 为质数返回 true，否则返回 false
bool isPrime(int n) {
    if (n < 2) {
        return false; // 小于 2 的数不是质数
    }
    // 只需要检查到 sqrt(n) 即可，即 i * i <= n
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    printf("100以下的质数有：\n");
    
    // 遍历 2 到 99 之间的所有整数
    for (int i = 2; i < 100; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
    
    return 0;
}