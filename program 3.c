#include <stdio.h>

int main()
{
    float r;
    printf("Enter the radius of the circle=");
    scanf("%f",&r);

    float d,c, a;

    d=2*r;
    c=2*3.14*r;
    a=3.14*(r*r);

    printf("Diameter of the circle=%f\n",d);
    printf("Circumference of the circle=%f\n",c);
    printf("Area of the circle=%f\n",a);

    return 0;
    
}
