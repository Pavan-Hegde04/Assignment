/*Search and sequence
  consider an integer array 'a' of size 10,where the values of the array elements are {1,5,4,8,9,2,0,6,11,7}. Write a program to
  > Find whether the given element exist in an array or not. If the element exists display YES else NO.
  > To print a number following a sequence of elements in an array i.e., 15489206117.*/


#include<stdio.h>
int main()
{
	int a[10]={1,5,4,8,9,2,0,6,11,7};
	int len=10,p;
	int x;
	printf("Enter element you want to search for : ");
	scanf("%d",&x);
	for(int i=0;i<len;i++)
	{
		if(a[i]==x)
		{
			p=1;
			break;
		}
	}
	if(p==1)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}
	printf("Sequence of element : ");
	for(int i=0;i<len;i++)
	{
		printf("%d",a[i]);
	}
	printf("\n");
	return 0;
}
