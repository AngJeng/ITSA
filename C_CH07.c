#include <stdio.h>
#include <stdbool.h>

int main(){
    int a, b, c, d, e;
    int value = 0;
    
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    value = a + 2 * b + 2 * c + 2 * d - 2 * e;
    if(value >= 45){
        printf("A\n");
    }
    else if(value >= 35 && value <= 44){
        printf("B\n");
    }
    else if(value >= 25 && value <= 34){
        printf("C\n");
    }
    else{
        printf("D\n");
    }
    
}
