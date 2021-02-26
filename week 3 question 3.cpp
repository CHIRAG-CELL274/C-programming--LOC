#include <stdio.h>

int gcd (int a,int b)
{
	if(b==0)
	{
		return a;
	}
	else
	{
		return gcd(b,a%b);
	}
}












int main()
{
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	
	int d=gcd(a,b);
	
	printf("%d\n",d);
	printf("%d",(a*b)/d);
	
	
}
