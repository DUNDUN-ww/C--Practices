#include<iostream>
#include<string>
using namespace std;

int main()
{
	string currstring, prestring;
	bool bl = true;
	cout << "请输入一个字符串：" << endl;
	while (cin >> currstring)//一直输入currstring
	{
		if (currstring == prestring)
		{
			bl = false;
			cout << "连续出现的字符串是 " << currstring << endl;
			break;
		}
		prestring = currstring;
	}

	if (bl)
	{
		cout << "没有连续的字符串" << endl;
	}
	return 0;
}
