#include <stdio.h>
#include <stdbool.h>

bool is_prime(int n) {
    if(n < 2){
        return false;
    }
    for(int i = 2; i <= n / 2; i++){
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    int sum;

    while(scanf("%d", &n) == 1)
    {
        sum = 0;
        for(int i = 0; i < n; i += 6){
            if(i % 12 != 0){
                sum += i;
            }
        }
        printf("%d\n", sum);
    }
    
}
