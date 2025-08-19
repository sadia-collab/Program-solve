#include<stdio.h>
int main()
{
    float cm,m,km;
    printf("Enter the lenght in centmeters:");
    scanf("%f",&cm);

    m=cm/100;
    km=cm/100000;

    printf("Meters:%.2f\n",m);
    printf("Kilometers: %.5f\n",km);

    return 0;

}
