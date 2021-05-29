#include <iostream>
#include <string>
#include <vector>
using namespace std;

int fact(int InputNumber)//函数的声明及定义
{
	int My_answer = 1;
	for (; InputNumber > 1; InputNumber--)
	{
		My_answer *= InputNumber;
	}
	return My_answer;//注意int的可表示范围
}
void main()
{
	cout << "请输入需要计算阶乘的数字:";
	int Input;
	cin >> Input;
	int Output = fact(Input);//函数的调用部分
	cout << Input << "的阶乘结果为：" << Output << endl;
}
