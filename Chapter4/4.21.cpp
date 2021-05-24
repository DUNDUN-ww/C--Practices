#include<iostream>
#include<vector>
#include<ctime>
#include<cstdlib>

using namespace std;

int main()
{
	vector<int> vint;
	const int sz = 10;
	srand((unsigned)time(NULL));

	//使用普通for循环为数组赋初值
	for (int i = 0; i != sz; i++)
	{
		vint.push_back(rand() % 100);
		cout << vint[i] << " ";
	}
	cout << endl;

	//使用范围for循环把数组中的奇数翻倍
	for (auto& c : vint)
	{
		if (c % 2 == 1)
		{
			c = c * 2;
		}
	}

	//使用范围for循环和迭代器输出数组的当前值
	for (auto& c : vint)
	{
		cout << c << " ";
	}
	//for (auto it = vint.cbegin(); it != vint.cend(); ++it)
	//{
	//	cout << *it << " ";
	//}
	cout << endl;
	return 0;
}
