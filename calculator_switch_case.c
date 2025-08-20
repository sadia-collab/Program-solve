#include <stdio.h>
int main() {
    int a, b;
    char op;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Enter operator(+,-,*,%):");
    scanf("%c",&op);

    switch(op) {
        case 1: printf("Sum = %d\n", a+b); break;
        case 2: printf("Difference = %d\n", a-b); break;
        case 3: printf("Multiplication = %d\n", a*b); break;
        case 4: printf("Division = %.2f\n", (float)a/b); break;
        default: printf("Invalid \n");
    }
    return 0;
}

