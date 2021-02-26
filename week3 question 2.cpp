#include <stdio.h>
int factorial(int a)
{
	int f=1;
	for(int i=1;i<=a;i++)
	{
		if(a==0)
		{
			return 1;
			
		}
		else
		{
		
		f=f*i;
		
	}
}
return f;
	
}









int main()
{
	int n;
	printf("enter a no:");
	scanf("%d",&n);
	int x=factorial(n);
	
	printf("%d",x);
	
}
