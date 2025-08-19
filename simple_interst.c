#include<stdio.h>
int main()
{
    float P,T,R,SI;
    printf("Enter principl ammount:");
    scanf("%f",&P);
    printf("Enter time:");
    scanf("%f",&T);
    printf("Enter rate of interest:");
    scanf("%f",&R);

    SI=(P+T+R)/100;
    printf("simple interest:%.2f\n",SI);
    return 0;
}
