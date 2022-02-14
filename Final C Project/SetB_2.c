#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct rel
{
	char child[20];
	char father[20];
}f[10];

int count_grand(char name[],int n)
{
	int count=0;
	for(int j=0;j<n;j++)
	{
		if(strcmp(name,f[j].father)==0)
		{
			count++;
			count_grand(f[j].child,n);
		}
	}
	return count;
}

int main()
{
	FILE* fp;
	char str[100], input[20];
	int i=0,n=1,grandchild=0;
	fp=fopen("file.txt","r");
	printf("Enter the string to get no of grandchildren:\n");
	scanf("%s",input);
	do
	{
		fscanf(fp,"%s",str);
		if(n%2==0)
		{
			strcpy(f[i].father,str);
			i++;
		}
		else
		{
			strcpy(f[i].child,str);
		}
		n++;
	}while(!feof(fp));
	rewind(fp);
	for(int j=0;j<i;j++)
	{
		if(strcmp(f[j].father,input)==0)
		{
			grandchild+=count_grand(f[j].child,i);
		}
	}
	printf("\ngrandchildren: %d\n",grandchild);


	fclose(fp);
	return 0;
}

