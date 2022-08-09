#include<stdio.h>
#include<math.h>
int main()
{
	int x;
	scanf("%d",&x);
	if(x<0)
	{
		x=-x;
		printf("fu ");
	}
	int t=x,cnt=0;
	while(t>0)
	{
		t/=10;
		cnt++;
	}
	int mask=pow(10,cnt-1);
	while(x>0)
	{
		int n;
		n=x/mask;
		x=x%mask;
		switch(n)
		{
			case 0:printf("ling ");break;
			case 1:printf("yi ");break;
			case 2:printf("er ");break;
			case 3:printf("san ");break;
			case 4:printf("si ");break;
			case 5:printf("wu ");break;
			case 6:printf("liu ");break;
			case 7:printf("qi ");break;
			case 8:printf("ba ");break;
			default:printf("jiu ");break;
		}
		mask/=10;
	}
	return 0;
}
