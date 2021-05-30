#include <iostream>
#include <string>
#include <vector>
using namespace std;

int exchange(int& val1, int& val2)//函数的声明及定义，接受两个参数，需要以传址的方式传入(引用)
{
	int a;
	a = val1;
	val1 = val2;
	val2 = a;
	return 0;
}
void main()
{
	cout << "请输入需要交换的两整数:";
	int val1, val2;
	cin >> val1 >> val2;
	cout << "交换之前的两数：" << val1 << " " << val2 << endl;
	exchange(val1, val2);
	cout << "交换之后的两数：" << val1 << " " << val2 << endl;
}

//引用更好用
