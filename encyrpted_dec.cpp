#include <iostream>
#include <string>
#include<stdlib.h>
#include <cstdio>
#include<cctype>
//#include <fstream>

using namespace std;
const int sizes = 1000;
void encr(char *p, string x);
void dec(char *p, string y, string k);

int main()
{
	string key, keycheck;
	char str[sizes], *p;
	p = str;

	cout << "please enter your information ";
	gets(str);

	cout << "please enter a key for to encyrpt your inf: ";
	getline(cin, key);

	cout << "\nyour inf encyripted: \n";
	encr(p, key);

	cout << "\nplease enter your key to decyrpt your inf: ";
	getline(cin, keycheck);
	dec(p, keycheck, key);

	getchar();
	return 0;

}

void encr(char *p, string key) {

	//for(p=str;*p;p++)
	for (int x = 0; p[x]; x++)
	{
		p[x] = p[x] + 2;
		cout<<p[x];

	}
	/*
	for (int x = 0; p[x]; x++)
	{
		cout<<p[x];

	}
	*/
//	cout << *p;
	cout << "\n";

}


void dec(char *p, string keycheck, string key) {


	if (key == keycheck)
	{
		cout << "\nyour inf decyripted: \n";
		for (int x = 0; p[x]; x++)
		{
			p[x] = p[x] - 2;
			
			cout<<p[x];

		}
		//cout << *p;
	}
	else
	{
		cout << "the key you enter is wrong!!!";
	}

}

