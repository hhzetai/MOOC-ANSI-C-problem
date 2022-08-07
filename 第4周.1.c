#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int n=0,m=0;
	while(a!=-1)
	{
		if(a%2==1)
		{
			n++;
		}
		else
		{
			m++;
		}
		scanf("%d",&a);
	}
	printf("奇数有%d个,偶数有%d个",n,m);
	return 0;
}
