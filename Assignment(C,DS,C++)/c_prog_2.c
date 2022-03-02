/*Write a function that receives by a student in 3 subjects and retuens the total and percentage of these marks.
  call this functionfrom main() and print the results in main()*/



#include<stdio.h>
void marks(int sub1,int sub2,int sub3,int *total,int *percent)
{	
	*total=sub1+sub2+sub3;//total marks
	*percent=*total*100/300;//percentage
}
int main()
{
	int Total,Percentage;
	int sub1,sub2,sub3;	
	printf("Enter the marks of 3 subjects\n");
	scanf("%d",&sub1);
	scanf("%d",&sub2);
	scanf("%d",&sub3);
	marks(sub1,sub2,sub3,&Total,&Percentage);
	printf("The toatl marks recevied is %d \nPercentage is %d\n",Total,Percentage);
	return 0;
}
