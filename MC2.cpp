#include<stdio.h>
int main() {
    int n, i, inside = 0;
    float x[100], y[100];

    printf("Enter the number of points (max 100): ");
    scanf("%d", &n);

    printf("Enter %d x and y coordinates (values between 0 and 1):\n", n);
    for (i = 0; i < n; i++) {
        printf("Point %d (x y): ", i + 1);
        scanf("%f %f", &x[i], &y[i]);

        if (x[i]*x[i] + y[i]*y[i] <= 1.0)
            inside++;
    }

    float pi = 4.0 * inside / n;
    printf("Estimated Pi = %f\n", pi);

    return 0;
}

