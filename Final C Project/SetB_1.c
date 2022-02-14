#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int a;	
	printf("input how long would string would be :");
	scanf("%d",&a);	
	char *str=(char *)malloc(1000*sizeof(char));
	printf("Enter the string : ");
	scanf("%s",str);
	int len,x=0,flag;
	len=strlen(str);
	do
	{
		flag=0;
		for(x=0;x<len-1;)
		{
			if(str[x]==str[x+1])
			{
				flag=1;
				for(int y=x;y<len-2;y++)
				{
					str[y]=str[y+2];
				}
				len=len-2;
			}
			else
			{
				x++;
			}
		}
		str[len]='\0';
	}while(flag==1 && len>0);
	if(len!=0)
	{
		printf("%s\n",str);
	}
	else
	{
		printf("Empty String\n");
	}
	return 0;
}
