#include<stdio.h>
int main()
{
	int i,j;
	scanf("%d/%d",&i,&j);
	int k,n,m;
	i=i*10;
	n=i/j;
	m=i%j;
	printf("0.%d",n);
	for(k=1;k<=200;k++)
	{
		m*=10;
		n=m/j;
		m=m%j;
		if(m==0)
		{
			break;
		}
		printf("%d",n);
	}
	return 0;
}
