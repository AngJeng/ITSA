#include <stdio.h>

int main() {
    int num;

    while(scanf("%d", &num) != EOF)
    {

        for (int i = 7; i >= 0; i--) {
            int bit = (num >> i) & 1;
            printf("%d", bit);
        }
        printf("\n");
    }

}
