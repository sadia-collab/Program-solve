#include <stdio.h>
int main() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    // Using if-else
    if(num % 2 == 0)
        printf("Even\n");
    else
        printf("Odd\n");

    // Using switch
    switch(num % 2) {
        case 0: printf("Even (switch)\n"); break;
        case 1: printf("Odd (switch)\n"); break;
    }
    return 0;
}
