#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if(a == b)
        printf("Both are equal\n");
    else
        printf("Not equal\n");

    return 0;
}
