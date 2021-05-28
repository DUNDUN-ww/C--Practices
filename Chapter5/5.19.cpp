#include<iostream>
#include<string>
using namespace std;

int main()
{
	do {
		cout << "Please enter two strings" << endl;
		string str1, str2;
		cin >> str1 >> str2;
		if (str1.size() < str2.size())
			cout << "更短的那个字符串是 " << str1 << endl;
		else if (str1.size() > str2.size())
		{
			cout << "更短的那个字符串是 " << str2 << endl;
		}
		else
		{
			cout << "两个字符串一样长" << endl;
		}
	} while (cin);
	return 0;
}
