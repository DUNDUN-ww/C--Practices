#include<iostream>
#include<string>
using namespace std;

int main()
{
	//定义三个字符串变量，分别表示
	//当前操作的字符串，前一个字符串，当前出现次数最多的字符串
	string currstring, prestring = "", maxstring;
	//定义两个整型变量，分别表示：
	//当前连续出现的字符串数量，当前出现次数最多的字符串数量
	int currcnt = 1, maxcnt = 0;
	while (cin >> currstring) //检查每个字符串
	{
		//如果当前字符串与前一个字符串一致，更新状态
		if (currstring == prestring)
		{
			++currcnt;
			if (currcnt > maxcnt)
			{
				maxcnt = currcnt;
				maxstring = currstring;
			}
		}
		//如果当前字符串与前一个字符串不一致，重置currcnt
		else
		{
			currcnt = 1;
		}
		//更新prestring以便于下一次循环使用
		prestring = currstring;
	}
	if (maxcnt > 1)
	{
		cout << "出现最多的字符串是：" << maxstring << ",次数是：" << maxcnt << endl;
	}
	else
	{
		cout << "每个字符串都只出现了一次" << endl;
	}
	return 0;
}
