#include<stdio.h>

main()
{
	int unit,amt,surcharge;
	printf("Enter Unit=");
	scanf("%d",&unit);
	if(unit<=50)
	{
		amt=unit*(0.50);
	}
	else if(unit<=150)
	{
		amt=(unit-50)*(0.75)+25;
	}
	else if(unit<=250)
	{
		amt=(unit-50-100)*(1.20)+25+75;
	}
	else if(unit>250)
	{
		amt=(unit-50-100-100)*(1.50)+25+75+120;
	}
	else
	{
		printf("Please enter valid unit");
		}    
	
	    printf("Amount=%d\n",amt);
	    surcharge = amt * 0.20;
	    printf("Surcharge=%d\n",surcharge);
	    amt= surcharge+amt;
	    printf("Total Bill=%d\n",amt);
		   
}
