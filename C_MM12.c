#include <stdio.h>  
#include <ctype.h>  
#include <stdbool.h>  

int main()  
{  
    int distance = 0;
    while(scanf("%d", &distance) != EOF)
    {
        if(distance % 238 == 0){
            printf("%d\n", (1000 * distance / 238));
        }
        else{
            printf("%d\n", (1000 * distance / 238) + 1);
        }
        
    }
}