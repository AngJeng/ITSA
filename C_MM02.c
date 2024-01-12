#include <stdio.h>  
#include <ctype.h>  
#include <stdbool.h>  
  
int main()  
{  
    float bottom = 0;  
    float height = 0;  
    while(scanf("%f %f", &bottom, &height) != EOF){  
        printf("%.1f\n", bottom * height / 2);  
    }  
}