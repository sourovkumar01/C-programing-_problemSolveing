#include <stdio.h>

double triangleArea(double a, double b);

int main() {
    double base, height;
    printf("Enter your base: ");
    scanf("%lf", &base);
    printf("Enter your height: ");
    scanf("%lf", &height);
    double result = triangleArea(base, height);
    printf("Triangle area: %lf\n", result);
    return 0;
}

double triangleArea(double a, double b) {
    return 0.5 * a * b;
}
