#include <stdio.h>

int factorial(int m)
{
	if(m==0)
	{
		return 1;
	}
	if(m==1)
	{
		return 1;
	}
	else
	{
		return(m*factorial(m-1));
	}
}
	
	
	
	
	
	
	
	int main()
	{
		int a;
		printf("enter a no:");
		scanf("%d",&a);
		
		int f= factorial(a);
		
		printf("%d",f);
	}
	
		
