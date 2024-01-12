#include <stdio.h>
#include <math.h>

int main() {

    int x, y;
    while (scanf("%d %d", &x, &y) != EOF){
        double distance = sqrt(pow(x, 2) + pow(y, 2)); //root of (squar + squar)

        if(distance <= 100){
            printf("inside\n");
        }
        else{
            printf("outside\n");
        }
    }

}
