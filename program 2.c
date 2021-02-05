#include <stdio.h>

int main()
{
    double temp;
    double f;
    printf("Enter the temperature in celcious :");
    scanf("%lf",&temp);

    f=((temp*9)/5)+32;
    printf("The temperature in fahrenheit is :%lf",f);
    return 0;
}
