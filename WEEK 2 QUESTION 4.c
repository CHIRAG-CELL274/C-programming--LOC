#include <stdio.h>
int main()
{
    int s=99999;
    int l=-99999;
    int i;

    int n;
    printf("enter the size of the array:");
    scanf("%d",&n);
    int a[n];

    for( i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);

    }
    for( i=0;i<=n-1;i++)
    {
        if(s>a[i])
        {
            s=a[i];

        }
    }
        for( i=0;i<=n-1;i++)
        {
            if(l<a[i])
            {
                l=a[i];
            }
        }
        printf("largest element =%d\n",l);
        printf("smallest element=%d",s);


    }

