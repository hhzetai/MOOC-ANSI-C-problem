#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int b=a/100;
	int c=(a-b*100)/10;
	int d=a-b*100-c*10;
	printf("%d%d%d\n",d,c,b);
	return 0;
}
