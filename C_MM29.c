#include <stdio.h>
#include <stdbool.h>

bool is_prime(int n) {
    if(n < 2){
        return false;
    }
    for(int i = 2; i * i <= n; i++){
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main(){
    int n;

    while(scanf("%d", &n) == 1)
    {
        int max_prime = 0;
        for (int i = n - 1; i >= 2; i--) {
            if (is_prime(i)) {
                max_prime = i;
                break;
            }
        }

        printf("%d\n", max_prime);
    }
    
}
