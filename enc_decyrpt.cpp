#include <iostream>
#include <string>
#include<stdlib.h>
#include<cctype>


using namespace std;
int main()
{
   
    char *p;
    string key, keycheck;
    int i;
    char str[80];
    cout << "please enter your information ";
    gets(str);
    cout << "please enter a key for to encyrpt your inf: ";
    getline(cin, key);
    p=str;
	cout << "\nyour inf encyripted: \n";
	//for(p=str;*p;p++)
	for (int x = 0; p[x]; x++)
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
		for (int x = 0; p[x]; x++)
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
