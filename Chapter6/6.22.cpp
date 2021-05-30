#include <iostream>
#include <string>
#include <vector>
using namespace std;

int swap(int* &a, int * &b)//函数的声明及定义，接受两个指针参数
{
	int *c = NULL;
	c = a;
	a = b;
	b = c;
	return 0;
}
void main()
{
	cout << "请输入两个整数:";
	int val1, val2;
	cin >> val1 >> val2;
	int* val1ptr = &val1;//将val2的地址赋给对应指针
	int* val2ptr = &val2;//将val2的地址赋给对应指针
	cout << "交换之前两指针所指对象：" << *val1ptr <<" "<< *val2ptr << endl;
	swap(val1ptr, val2ptr);
	cout << "交换之后两指针所指对象：" << *val1ptr << " " << *val2ptr << endl;
}
