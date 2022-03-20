#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
	fstream f;
	int count=0, i=0;
	string str;

	f.open("file2.txt", ios::in|ios::out);
	f.seekg(0);

	while(f >> str)
	{

		for(i=0; i<str.length(); i++)
		{
			if(str[i] == 'a' || str[i] == 'A')
			{
				count++;
				break;
			}
			else
			{
				continue;
			}
		}


	}

	cout << "Number of words that has 'a' in them are: " << count << endl;

	return 0;
}
