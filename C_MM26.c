#include <stdio.h>

int main() {
    int N;

    // 輸入一正整數
    scanf("%d", &N);

    // 輸出相乘的積
    for(int i = 1; i <= N; i++){
        printf("%d*%d=%d\n", i, i, i * i);
    }

    return 0;
}
