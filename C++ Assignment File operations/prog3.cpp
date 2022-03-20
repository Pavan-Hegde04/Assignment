#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	fstream input;
	string str;
	int count=0;

	input.open("file3.txt", ios::in|ios::out);

	input.seekg(0);

	while(input >> str)
	{
		if(str[0] == 'e' || str[0] == 'E')
		{
			count++;
		}
		else
			continue;
	}

	cout << "the number of words that start with 'e' are: " << count << endl;

	return 0;
}

