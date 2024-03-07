#include<stdio.h>

main()
{
	int i,n,sum=0;
	
	printf("enter the last value for loop n =");
	scanf("%d",&n);
	
	
	for(i=1;i<=n;i++)
	{
		sum = sum+i;
	}
	printf("%d\n",sum);
}