#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char input[100];

    while(scanf("%s", input) != EOF){
        char *endptr;
        long intValue = strtol(input, &endptr, 10);
        if(*endptr == '\0'){
            printf("int\n");
            continue;
        }

        char *endptrFloat;
        double floatValue = strtod(input, &endptrFloat);
        if(*endptrFloat == '\0'){
            printf("float\n");
            continue;
        }

        if(strlen(input) == 1){
            printf("char\n");
            continue;
        }

        printf("string\n");
    }

}
