/*Create a class called 'Matrix' containing a constructor that initialises the number of rows and the number of columns of a new Matrix object. The Matrix class has the following information:
  1 - number of rows of matrix
  2 - number of columns of matrix
  3 - elements of matrix (You can use 2D vector)
  The Matrix class has functions for each of the following:
  1 - get the number of rows
  2 - get the number of columns
  3 - set the elements of the matrix at a given position (i,j)
  4 - adding two matrices.
  5 - multiplying the two matrices
  You can assume that the dimensions are correct for the multiplication and addition.*/


#include<iostream>
using namespace std;
class matrix
{
	private:
		int rows,columns;
		int m1[10][10],m2[10][10],m[10][10],s[10][10];
	public:
		matrix getrows()
		{
			cout<<"Enter no. of rows ";
			cin>>rows;
		}
		matrix getcolumns()
		{
			cout<<"Enter no. of columns ";
			cin>>columns;
		}
		void setelem()
		{
			cout<<"Enter the elements of first matrix"<<endl;
			for(int i=0;i<rows;i++)
			{
				for(int j=0;j<columns;j++)
				{
					cin>>m1[i][j];
				}
			}
			cout<<"Enter the elements of second matrix"<<endl;
			for(int i=0;i<rows;i++)
			{
				for(int j=0;j<columns;j++)
				{
					cin>>m2[i][j];
				}
			}
		}
		void add()
		{
			for(int i=0;i<rows;i++)
			{
				for(int j=0;j<columns;j++)
				{
					s[i][j]=m1[i][j]+m2[i][j];
				}
			}
			cout<<"Sum of 2 matrix is "<<endl;;
			for(int i=0;i<rows;i++)
			{
				for(int j=0;j<columns;j++)
				{
					cout<<s[i][j]<<" ";
				}
				cout<<endl;
			}
		}
		void mul()
		{
			for(int i=0;i<rows;i++)
			{
				for(int j=0;j<columns;j++)
				{
					m[i][j]=m1[i][j]*m2[i][j];
				}
			}
			cout<<"Multiplication of 2 matrix is "<<endl;;
			for(int i=0;i<rows;i++)
			{
				for(int j=0;j<columns;j++)
				{
					cout<<m[i][j]<<" ";
				}
				cout<<endl;
			}
		}
};
int main()
{
	matrix mat1;
	mat1.getrows();
	mat1.getcolumns();
	mat1.setelem();
	mat1.add();
	mat1.mul();
	return 0;
}
