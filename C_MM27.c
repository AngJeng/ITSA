#include <stdio.h>

int main() {
    int num;
    int sum = 0;

    while(scanf("%d", &num) != EOF){


        // 計算兩整數之間所有整數的總和
        for (int i = 1; i <= num; i++) {
            if(i % 5 == 0 && i % 7 == 0){
                if(i == 35)
                {
                    printf("%d", i);
                }
                else{
                    printf(" %d", i);
                }
            }
        }
        printf("\n");
    }

}
