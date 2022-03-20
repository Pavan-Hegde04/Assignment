#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	fstream input;
	string str;
	int count=0;

	input.open("file4.txt", ios::in|ios::out);

	input.seekg(0);

	while(input >> str)
	{
		int l = str.length() - 1;

		if(str[l] == 's')
		{
			//cout << str << " " << endl << "str last char: " << str[l] << endl << endl;
			count++;
		}
		else if(str[l] == ',')
		{
			if(str[l-1] == 's')
			{
				//cout << "last char ," << endl;	
				//cout << str << " " << endl << "str last char: " << str[l] << endl << endl;
				count++;
			}
			else
				continue;
		}
		else
			continue;
	}

	cout << "the number of words that ends with 's' are: " << count << endl;

	return 0;
}

