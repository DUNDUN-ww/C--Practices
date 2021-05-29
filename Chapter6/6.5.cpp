#include <iostream>
#include <string>
#include <vector>
using namespace std;

int fact(int InputNumber)//函数的声明及定义
{
	InputNumber = abs(InputNumber);
	return InputNumber;
}
void main()
{
	cout << "请输入需要计算绝对值的数字:";
	int Input;
	cin >> Input;
	int Output = fact(Input);//函数的调用部分
	cout << Input << "的绝对值为：" << Output << endl;
}
