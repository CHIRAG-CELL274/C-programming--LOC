#include <stdio.h>

int main()
{
    float phy,chem,bio,math,comp;

    printf("Physics mark=");
    scanf("%f",&phy);
    printf("Chemistry mark=");
    scanf("%f",&chem);
    printf("Biology mark=");
    scanf("%f",&bio);
    printf("Mathematics mark=");
    scanf("%f",&math);
    printf("Computer mark=");
    scanf("%f",&comp);

    float per=((phy+chem+bio+math+comp)/500)*100;

    if(per>=90)
    {
        printf("Grade A");
    }

    if(per>=80&&per<90)
    {
        printf("Grade B");

    }

    if(per>=70&&per<80)
    {
        printf("Grade C");

    }
    if(per>=60&&per<70)
    {
        printf("Grade D");
    }
    if(per>=40&&per<60)
    {
        printf("Grade E");

    }
    if(per<40)
    {
        printf("Grade F");

    }
    return 0;
}
