#include<stdio.h>
int main()
{
	int a,b,c,d,e=0;
	scanf("%d",&a);
	int i,j;
	for(i=1;a!=0;i++)
	{
		b=a;
		a=a/10;
		c=b-a*10;
		if(c%2==i%2)
		{
			d=1;
		}
		else
		{
			d=0;
		}
		if(i==1&&d==1)
		{
			d=1;
		}
		for(j=0;j<i-1;j++)
		{
			d=d*2;
		}
		e=e+d;
	}
	printf("%d",e);
	return 0;
}
