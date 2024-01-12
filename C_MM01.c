#include <stdio.h>  
#include <ctype.h>  
#include <stdbool.h>  
  
int main()  
{  
    float upper = 0;  
    float lower = 0;  
    float height = 0;  
    while(scanf("%f %f %f", &upper, &lower, &height) != EOF){  
        printf("Trapezoid area:%.1f\n", (upper + lower) * height / 2);  
    }  
}