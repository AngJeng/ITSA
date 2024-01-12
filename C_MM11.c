#include <stdio.h>  
#include <ctype.h>  
#include <stdbool.h>  

int main()  
{  
    int ticket = 0;
    scanf("%d", &ticket);
    printf("NT10=%d\nNT5=%d\nNT1=%d\n", ticket / 10, (ticket - (ticket / 10) * 10) / 5, ticket - ((ticket - (ticket / 10) * 10) / 5 ) * 5 - (ticket / 10) * 10);
}