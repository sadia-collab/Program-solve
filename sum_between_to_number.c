#include <stdio.h>

int main() {
    int a, b, i, sum = 0;

    printf("Enter num1: ");
    scanf("%d" , &a);
    printf("enter num2:");
    scanf("%d",&b);

    for(i = a; i <= b; i++) {
    sum += i;
    printf("%d+",i);
    }

    printf("%d= %d\n",b ,a+b);

    return 0;
}

