#include <stdio.h>

int main() {
    int minutes;
    double ans;

    scanf("%d", &minutes);

    if (minutes <= 800) {
        ans = minutes * 0.9;
    } else if (minutes <= 1500) {
        ans = 800 * 0.9 + (minutes - 800) * 0.9 * 0.9;
    } else {
        ans = 800 * 0.9 + 700 * 0.9 * 0.9 + (minutes - 1500) * 0.9 * 0.79;
    }
    printf("%.1f\n", ans);

}
