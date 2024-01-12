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
    int a = 0;  
    scanf("%d", &a);  
    printf("%d %d %d\n", a, a * a, a * a * a);  
      
  
}