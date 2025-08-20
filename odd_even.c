#include <stdio.h>
int main() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    if(num % 2 == 0)
        printf("Even\n");
    else
        printf("Odd\n");

    switch(num % 2) {
        case 0: printf("Even (switch)\n"); break;
        case 1: printf("Odd (switch)\n"); break;
    }
    return 0;
}

