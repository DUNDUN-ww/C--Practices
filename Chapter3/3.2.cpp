#include <iostream>
#include <string>
using namespace std;

int main()
{
	//string line;
	// 按行读入
	//while(getline(cin,line))
	//{ 
	//	cout << line << endl;
	//}
	// 按词读入
	string word;
	while (cin >> word)
	{
		cout << word << endl;
	}

	system("pause");
	return 0;
}
