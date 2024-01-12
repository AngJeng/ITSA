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

    while(scanf("%d", &n) == 1)
    {
        if(is_prime(n)){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    
}
