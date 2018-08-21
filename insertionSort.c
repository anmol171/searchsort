#include<stdio.h>

// value to insert x

void insertionSorting(int list[], int n)
{
	int i,j,x,h;
	
		
	for(i=0;i<n;i++)
	{
		x = list[i]; // value to insert
		
		h = i; //hole position to compare
		
		while(h>0 && list[h-1] > x)
		{
			list[h] = list[h-1];
			h--;
			
		}
		
		if(h != i)
		{
			list[h] = x;
		}
	
		
		
		
	}
}


void main()
{
	int i,j,a[50],b[50],n,x,l;
	
	printf("Enter the number of Element in Array: ");
	scanf("%d",&n);
	
	printf("Enter Elements of Array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
		
	insertionSorting(a,n);
	


	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
		}	
	

}
