#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

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
		if (line1 > line2)
		{
			cout << line1 << endl;
		}
		else
		{

			cout << line2 << "是更大的字符串" << endl;
		}
	}
	if (line1.size() == line2.size())
	{
		cout << "两个字符串长度相等" << endl;
	}
	else
	{
		if (line1.size() > line2.size())
		{
			cout << line1<< "的长度更长" << endl;
		}
		else
		{
			cout << line2 << "的长度更长" << endl;
		}
	}
	return 0;
}

