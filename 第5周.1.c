#include<stdio.h>
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	int i=2,j=2,sum=0,cnt=0;
	for(i=2;cnt<m;i++)
	{
		int isprime=1;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				isprime=0;
				break;
			}
		}
		if(isprime==1)
		{
			cnt++;
			if(cnt>=n)
			{
				sum=sum+i;
			}
		}
	}
	printf("%d\n",sum);
	return 0;
}
