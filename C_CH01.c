#include <stdio.h>
#include <stdbool.h>

int main(){
    int n;
    
    while(scanf("%d", &n) == 1){
        switch(n){
            case 1:
                printf("Person\n");
                break;
            case 2:
                printf("Fairy\n");
                break;
            case 3:
                printf("Dwarf\n");
                break;
        }
    }

}
