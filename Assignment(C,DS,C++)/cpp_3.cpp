/*Suppose you have a Piggie Bank with an initial amount of Rs.50 and you have to add some more amount to it. Create a class 'AddAmount' with a data member named 'amount' with an initial value of Rs. 50.   	Now make two constructors of this class as follows:
  1 - without any parameter - no amount will be added to the Piggie Bank
  2 - having a parameter which is the amount that will be added to the Piggie Bank
  Create an object of the 'AddAmount' class and display the final amount in the Piggie Bank.*/


#include<iostream>
using namespace std;
class addamount
{
	int amount=50;
	public:
		addamount()
		{
			cout<<"Piggie bank contains "<<amount<<" Rs"<<endl;
		}
		addamount(int x)
		{
			amount=amount+x;
			cout<<"After adding some amount"<<endl;
			cout<<"Amount is : "<<amount<<endl;
		}
};
int main()
{
	addamount a1,a2(50);
	return 0;
}
