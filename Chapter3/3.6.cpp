#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str("bc 12");
	for (auto &s : str)
	{
		s = 'x';
	}
	cout << str;

	system("pause");
	return 0;
}
