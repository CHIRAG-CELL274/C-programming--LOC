#include <stdio.h>

int square(int a)
{
	int r;
	r=a*a;
	return r;
}


int main()
{
	int n;
	printf("enter a no:");
	scanf("%d",&n);
	int m=square(n);
	printf("%d",m);
	
}
