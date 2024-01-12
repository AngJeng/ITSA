#include <stdio.h>

int main() {
    int workHours;
    double hourlyRate, total;

    while(scanf("%d %lf", &workHours, &hourlyRate) != EOF)
    {
        if (workHours <= 60) {
            total = workHours * hourlyRate;
        } else if (workHours <= 120) {
            total = 60 * hourlyRate + (workHours - 60) * hourlyRate * 1.33;
        } else {
            total = 60 * hourlyRate + 60 * hourlyRate * 1.33 + (workHours - 120) * hourlyRate * 1.66;
        }

        printf("%.1f\n", total);
    }
    return 0;
}
