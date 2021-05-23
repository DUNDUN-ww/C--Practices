#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	string str;
	vector<int> strVec = { 1,2,3,4,5,6,7,8,9,10 };
	vector<int>::iterator it;
	int n = 1;
	int sum;
	// 连续两个相加
	for (it = strVec.begin(); it != strVec.end() - 1; it++)
	{
		sum = *it + *(it + 1);
		cout << sum << endl;
	}

	return 0;
}
