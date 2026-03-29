#include <stdio.h>

void reverse() {
    int x;
    scanf("%d", &x);
    if (x == 0) return;          // 读到0就返回
    reverse();                   // 先递归处理后面的数
    printf("%d ", x);            // 返回时再输出当前数
}

int main() {
    reverse();                   // 从第一个数开始
    return 0;
}
