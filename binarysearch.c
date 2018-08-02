#include<stdio.h>

int binary(int a[], int n, int x)
{
	int l=0,i,h,mid;
	h=n-1;
	mid = (l+h)/2;
	
	if(a[mid]==x)
	{
		return mid;
	}
	else if(a[mid]>x)
	{
		l=mid+1;
	}
	else
	{
		h=mid-1;
	}
	
	
	
}

void swap(int *a,int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
	
}

void sorting(int list[], int n)
{
	int i,j;
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++){
		
		if(list[j]>list[j+1])
		{
			swap(&list[j],&list[j+1]);
		}
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
		
	sorting(a,n);
	

	printf("Enter the number to search: ");
	scanf("%d",&x);
	
	
	l = binary(a,n,x);
	
	printf("%d",l);
}
