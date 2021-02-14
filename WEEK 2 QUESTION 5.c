#include <stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);

    for( i=n-1;i>=1;i--)
    {
        for(j=n;j>=i;j--)
        {
            printf(" ");
        }
        for( k=1;k<=2*i-1;k++)
        {
            if(k==1||k==(2*i-1))
			
			
            printf("*");
            else
            
                printf(" ");
            
            printf("\n");
        }
        for(i=2;i<=n;i++)
        {
            for( j=1;j<=n;j++)
            {
                printf(" ");

            }
            for(k=1;k<=2*i-1;k++)
            {
                if(k==1||k==(2*i-1))
                {
                    printf("*");

                }
                else
                
                    printf(" ");
                
                printf("\n");
            }

        }
    }
}
