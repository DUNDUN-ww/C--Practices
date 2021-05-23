#include <iostream>
#include <string>
using namespace std;

int main()
{
	string line, NoSpace, Space;
	cout << "输入 “exit”退出" << endl;
	while (cin >> line)
	{
		
		if (line == "exit")
		{
			break;
		}
		NoSpace = NoSpace + line;
		Space = Space + " ";
		Space = Space + line;
	}
	cout << "输出的不带空格：" << NoSpace << endl;
	cout << "输出的带空格：" << Space << endl;

	system("pause");
	return 0;
}
