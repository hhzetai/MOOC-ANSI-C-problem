#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n%2==0)
	{
		n=n-1;
	}
	int i;
	for(i=1;i<=n;i=i+2)
	{
		printf("%d ",i);
	}
	return 0;
} 
