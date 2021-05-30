#include <iostream>
#include <string>
using namespace std;

void exchange(int* val1, int* val2)
{
	int tmp;
	tmp = *val1;
	*val1 = *val2;
	*val2 = tmp;


}

int main()
{
	cout << "请输入需要交换的两整数:";
	int val1, val2;
	cin >> val1 >> val2;
	cout << "交换之前的两数：" << val1 << " " << val2 << endl;
	exchange(&val1, &val2);
	cout << "交换之后的两数：" << val1 << " " << val2 << endl;
	return 0;
}
