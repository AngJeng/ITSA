#include <stdio.h>

int main() {
    int N;
    int sum = 0;

    while(scanf("%d", &N) != EOF)
    {
        for(int i = 1; i <= N; i++){
            if (i % 3 == 0) {
                sum += i;
            }
        }

        printf("%d\n", sum);
    }
    

}
