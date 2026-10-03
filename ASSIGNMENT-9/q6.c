#include <stdio.h>

void calculateOperations(int a, int b, int *sum, int *difference, int *product, float *quotient) {
    *sum = a + b;
    *difference = a - b;
    *product = a * b;
    if (b != 0) {
        *quotient = (float)a / b;
    } else {
        *quotient = 0; 
    }
}

int main() {
    int num1, num2;
    int sum, difference, product;
    float quotient;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    calculateOperations(num1, num2, &sum, &difference, &product, &quotient);

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Quotient: %.2f\n", quotient);

    return 0;
}
