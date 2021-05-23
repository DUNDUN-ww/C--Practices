#include <iostream>
#include <string>
using namespace std;

int main()
{
	string line1, line2;
	cout << "请输入字符串1：";
	cin >> line1;
	cout << "请输入字符串2：";
	cin >> line2;
	if (line1 == line2)
	{
		cout << "两个字符串相等" << endl;
	}
	else
	{
		cout << "两个字符串不相等" << endl;
	}
	if (line1.size() == line2.size())
	{
		cout << "两个字符串长度相等" << endl;
	}
	else
	{
		cout << "两个字符串长度不相等" << endl;
	}
	return 0;
}
