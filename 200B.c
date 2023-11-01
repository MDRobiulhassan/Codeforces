#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0, avg = 0.0;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        double a;
        scanf("%lf", &a);
        sum += a;
    }
    avg = sum / n;
    printf("%.12lf", avg);
    return 0;
}
