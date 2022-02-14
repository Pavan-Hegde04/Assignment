#include<stdio.h>
#include<stdlib.h>

#define SIZE 2
#define INT_BITS (sizeof(int) * SIZE)

void Printbin(unsigned int);
unsigned int Reversebin(unsigned int);

int main()
{
	unsigned int n;
	unsigned int bin;
	printf("Enter Decimal number : \n");
	scanf("%u",&n);
	printf("Binary for given decimal number is : ");
	Printbin(n);
	bin=Reversebin(n);
	printf("\nAfter Reversing Binary number is : ");
	Printbin(bin);
	printf("\n");
	return 0;
}

void Printbin(unsigned int n)
{
	int i;
	for(i=(INT_BITS-1);i>=0;i--)
	{
		(n&(1<<i))?printf("1"):printf("0");
	}
}

unsigned int Reversebin(unsigned int num)
{
	unsigned int x=0;
	unsigned int temp=0;
	int l=(INT_BITS-1);
	for(;x<l;x++)
	{
		temp|=num&1;
		num>>=1;
		temp<<=1;
	}
	return temp;
}
