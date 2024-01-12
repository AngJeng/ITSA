#include <stdio.h>  
#include <ctype.h>  
#include <stdbool.h>  
  
int make_it_positive(int x){  
    if(x < 0){  
        return x * (-1);  
    }  
    else{  
        return x;  
    }  
}  
  
int main()  
{  
    int a = 0;  
    int b = 0;  
    scanf("%d %d", &a, &b);  
    printf("%d+%d=%d\n", a, b, a + b);  
    printf("%d*%d=%d\n", a, b, a * b);  
    printf("%d-%d=%d\n", a, b, a - b);  
    if(a < 0 && b < 0){  
        printf("%d/%d=%d...%d\n", a, b, a / b + 1, a % b - b);  
    }  
    if(a < 0 && b >= 0){  
        printf("%d/%d=%d...%d\n", a, b, a / b - 1, a % b + b);  
    }  
    else{  
        printf("%d/%d=%d...%d\n", a, b, a / b, a % b);  
    }  
      
  
}