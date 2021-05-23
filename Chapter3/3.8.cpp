#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str("123abc");
	int i = 0;

	for (i = 0; i < str.size(); i++)
	{
		str[i] = 'x';//for更好有一些，变量旨在for内部使用
	}
	cout << "for：" << str << endl;


	while (i < str.size())
	{
		str[i] = 'x';
	}
	cout << "while：" << str << endl;

	system("pause");
	return 0;

}
