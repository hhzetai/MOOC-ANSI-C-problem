#include<stdio.h>
int main()
{
	int utc;
	scanf("%d",&utc);
	int bjt=utc-800;
	if(bjt>=0)
	{
		printf("%dʱ%d��",bjt/100,bjt%100);
	}
	else
	{
		printf("%dʱ%d��",utc/100+16,utc%100);
	}
	return 0;
} 
