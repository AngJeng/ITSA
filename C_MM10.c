#include <stdio.h>  
#include <ctype.h>  
#include <stdbool.h>  
#include <math.h>  
  
void f(float x){  
    x = round(x * 10.0) / 10.0;  
    printf("%.1f\n", x);  
}  
  
int main()  
{  
    float a = 0;  
    while(scanf("%f", &a) != EOF){  
        f(a * 9 / 5 + 32);  
    }  
      
      
  
}