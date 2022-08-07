#include<stdio.h>
int main()
{
	int utc;
	scanf("%d",&utc);
	int bjt=utc-800;
	if(bjt>=0)
	{
		printf("%d时%d分",bjt/100,bjt%100);
	}
	else
	{
		printf("%d时%d分",utc/100+16,utc%100);
	}
	return 0;
} 
