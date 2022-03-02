/*Write a program by creating an 'Employee' class having the following functions and print the final salary
  1 - 'getinfo()' which takes the salary,number of hours of work per day of employee as parameters
  2 - 'addsal()' which adds $10 to the salary of the employee if it is less than $500
  3 - 'addwork()' which adds $5 to the salary of the employee if the number of hours of work per day is more than 6 hours.*/

#include<iostream>
using namespace std;

class employee
{
int salary,hours;
	public:
	void getinfo(int x,int y)
	{
		salary=x;
		hours=y;
	}
	void addsal()
	{
		if(salary<500)
		{
			salary=salary+10;
		}
	}
	void addwork()
	{
		if(hours>6)
		{
			salary=salary+5;
		}
	}
	void display()
	{
		cout<<"Salary of employee for the day is : "<<salary<<endl;
	}
};
int main()
{
	employee e1;
	e1.getinfo(495,8);
	e1.addsal();
	e1.addwork();
	e1.display();
	return 0;
}
