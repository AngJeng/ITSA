#include <stdio.h>

int main() {
    int all, days, hours, minutes, seconds;

    scanf("%d", &all);

    days = all / (24 * 60 * 60);
    all %= 24 * 60 * 60;

    hours = all / 60 * 60;
    all %= 60 * 60;

    minutes = all / 60;
    seconds = all % 60;

    printf("%d days\n%d hours\n%d minutes\n%d seconds\n", days, hours, minutes, seconds);
}
