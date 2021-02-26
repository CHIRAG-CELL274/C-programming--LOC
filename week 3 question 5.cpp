#include <stdio.h>

int palindrome(int a,int r)
{
	
	if(a==0)
	{
		return r;
		
	}
	else
	{
		return palindrome(a/10,r*10+a%10);
		
	}
}

int main()
{
	int a;
	scanf("%d",&a);
	
	int p=palindrome(a,0);
	if(a==p)
	{
		printf("is a palindrone no");
		
	}
	else
	{
		printf("not a palindrome no");
	}
	
	
}
