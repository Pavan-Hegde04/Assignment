#include<iostream>
#include<fstream>
#include<string>
#include<cstring>
using namespace std;
int main()
{
	ifstream fin("file1.txt"); //opening text file
	int count=0;
	char ch[20],c[5]="the";
	char c1[5]="The";
 	
	while(fin)
	{
		fin>>ch;
		if(strcmp(ch,c)==0||strcmp(ch,c1)==0)
			count++;
	} 
 
	cout<<"Occurrence = "<<count<<endl;
	fin.close(); //closing file
 
	return 0;
 
}
