#include <stdio.h>
int main() {
    int a, b, temp;
    printf("Enter number1: ");
    scanf("%d",&a);
    printf("Enter nuber2 :");
    scanf("%d",&b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}
