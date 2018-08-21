#include<stdio.h>

void main()
{
	int i,a=0,b=0,c=0,d=0,x;
	for(i=1;i<=100;i++)
	{
		printf("\n");
		if((i%3==0) && (i%5==0))
		{
			a=a+1;
			printf("fizzbuzz");
		}
		else if(i%3==0)
		{
			b=b+1;
			printf("fizz");
		}
		else if(i%5==0)
		{
			c++;
			printf("buzz");
		}
		else
		{
			d++;
			printf("i:%d",i);
		}
		
		x=a+b+c+d;
		
		
	}
	
		printf("a:%d b:%d c:%d d:%d x:%d",a,b,c,d,x);
}
