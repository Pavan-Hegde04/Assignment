/*In-place merge two sorted arrays.
  Given two sorted arrays, X[] and Y[] of size m and n each,merge elements of X[] with elements of Y[]
  by maintaining the sorted order, i.e., fill X[] with the first m smallest elements and fill Y[] with remaining elements.*/



#include<stdio.h>

void merge(int x[],int y[],int m,int n)
{
	for(int i=n-1;i>=0;i--)
	{
		int j,last=x[m-1];
		for(j=m-2;j>=0 && x[j]>y[i];j--)
		{
			x[j+1]=x[j];
		}
		if(j!=m-2 || last>y[i])
		{
			x[j+1]=y[i];
			y[i]=last;
		}
	}
}

int main()
{
	int x[]={1,4,7,8,10};
	int y[]={2,3,9};
	int m=sizeof(x)/sizeof(x[0]);
	int n=sizeof(y)/sizeof(y[0]);
	merge(x,y,m,n);
	printf("X[] = ");
	for(int i=0;i<m;i++)
	{
		printf("%d ",x[i]);
	}
	printf("\n");
	printf("Y[] = ");
	for(int i=0;i<n;i++)
	{
		printf("%d ",y[i]);
	}
	printf("\n");
	return 0;
}
