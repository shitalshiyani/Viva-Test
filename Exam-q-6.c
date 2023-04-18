#include<stdio.h>

main()
{
	int n,fd,ld,sum=0;
	
	printf("Enter Value of N=");
	scanf("%d",&n);
	
	ld=n%10;
	
	while (n>=10)
	{
		n=n/10;
	}
	fd=n;
	
	sum=fd+ld;
	printf("Sum of First and Last Digit=%d",sum);
	
	return 0;
}
