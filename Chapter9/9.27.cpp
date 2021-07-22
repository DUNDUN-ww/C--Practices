#include <iostream>
#include <forward_list>

using namespace std;

int main()
{
	forward_list<int> flst = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	auto prev = flst.before_begin();//表示flst的“首前元素’
	auto curr = flst.begin();//表示flst中的第一个元素

	while (curr != flst.end())
	{
		if (*curr % 2)
		{
			curr = flst.erase_after(prev);//删除prev指向的位置之后的元素
		}
		else
		{
			prev = curr;
			++curr;
		}
	}

	for (auto i : flst)
	{
		cout << i << endl;
	}

	return 0;
}
