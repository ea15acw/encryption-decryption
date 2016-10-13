#include <iostream>
#include <string>
#include<stdlib.h>

using namespace std;
int main()
{
	string str, key, keycheck;
	cout << "please enter your information ";
	getline(cin, str);
	cout << "please enter a key for to encyrpt your inf: ";
	getline(cin, key);


	cout << "\nyour inf encyripted: \n";
	for (int x = 0; x<str.size(); x++)
	{
		str[x] = str[x] + 2;

	}
	cout << str;
	cout << "\n";

	cout << "\nplease enter your key to decyrpt your inf: ";
	getline(cin, keycheck);

	if (key == keycheck)
	{
		cout << "\nyour inf decyripted: \n";
		for (int x = 0; x<str.size(); x++)
		{
			str[x] = str[x] - 2;

		}
		cout << str;
	}
	else
	{
		cout << "your key is wrong!!!";
	}

	getchar();
	return 0;

}