#include <iostream>
using namespace std;
int main()
{
	int i = 5, j = 10;
	int *p = &i;// p存放变量i的地址，或者说p是指向变量i的指针。*p指向对象i的值
	cout << p << " " << *p << endl;
	p = &j;//p又指向变量j的指针
	cout << p << " " << *p << endl;
	*p = 20;
	cout << p << " " << *p << endl;
	j = 30;
	cout << p << " " << *p << endl;
	system("pause");
	return 0;
}
//008FF94C 5
//008FF940 10
//008FF940 20
//008FF940 30
