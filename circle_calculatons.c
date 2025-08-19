#include<stdio.h>
#define PI 3.1416
int main()
{
    float radius,diameter,circumference,area;
    printf("Enter radius of circle:");
    scanf("%f",&radius);
    diameter=2 * radius ;
    circumference=2* PI *radius*radius;
    area=PI * radius* radius;

    printf("diameter:%.2f\n",diameter);
    printf("circumference:%.2f\n",circumference);
    printf("Area:%.2f%\n",area);
    return 0;
}
