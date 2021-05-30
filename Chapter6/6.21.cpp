#include <iostream>
#include <string>
#include <vector>
using namespace std;

int compare(int a, int* b)//函数的声明及定义，接受两个参数，一个为数，一个为指针
{
	if (a >= *b)
	{
		return a;
	}
	else
	{
		return *b;
	}

}
void main()
{
	cout << "请输入两个整数:";
	int val1, val2;
	cin >> val1 >> val2;
	int* val2ptr = &val2;//将val2的地址赋给对应指针
	cout << "较大的数为：" << compare(val1, val2ptr) << endl;
}
