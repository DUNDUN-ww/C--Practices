#include <iostream>
#include <string>
#include <vector>
using namespace std;

int fact()//函如果接受参数，那么就为形参）
{
	static int Num = 0;//局部静态变量
	Num++;
	if (Num == 1)//判断局部静态变量的大小即可
		return 0;
	else
		return 1;
}
void main()
{
	for (int i = 0; i <= 10; i++)//i变量就是一个局部变量，只在for语句块中存在
	{
		cout << fact() << endl;
	}
	//cout << fact() << endl;
}
