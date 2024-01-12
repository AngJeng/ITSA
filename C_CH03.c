#include <stdio.h>
#include <stdbool.h>

int main(){
    int a, b, c;
    
    while(scanf("%d %d %d", &a, &b, &c) == 3){
        if(a >= b){
            if(b >= c){
                printf("%d>%d>%d\n", a, b, c);
            }
            else if(c >= b){
                if(a >= c){
                    printf("%d>%d>%d\n", a, c, b);
                }
                else if(c >= a){
                    printf("%d>%d>%d\n", c, a, b);
                }
            }
        }
        else if(b >= a){
            if(b >= c){
                if(a >= c){
                    printf("%d>%d>%d\n", b, a, c);
                }
                else if(c >= a){
                    printf("%d>%d>%d\n", b, c, a);
                }
            }
            else if(c >= b){
                    printf("%d>%d>%d\n", c, b, a);
            }
        }
    }
}
