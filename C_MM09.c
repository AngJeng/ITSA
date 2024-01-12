#include <stdio.h>  
#include <ctype.h>  
#include <stdbool.h>  
#include <math.h>  
  
int f(float x){  
    int ans = 1;  
    for(int i = 0; i < x; i++){  
        ans *= 2;  
    }  
    return ans;  
}  
  
int main()  
{  
    int a = 0;  
    while(scanf("%d", &a) != EOF){  
        if(a >= 31){  
            printf("Value of more than 31\n");  
        }  
        else{  
            printf("%d\n", f(a));  
        }  
    }  
  
      
  
}