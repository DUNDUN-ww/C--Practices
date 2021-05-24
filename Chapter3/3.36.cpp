#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	int a[10], b[10];
	int *numbera = a;
	int *numberb = b;
	for (int i = 0; i < 10; i++)
	{
		a[i] = i;
		b[i] = 10 - i;
	}
	for (int i = 0; i < 10; i++)
	{
		if ( *(numbera + i) == *(numberb + i))
		{
		}
		else
		{
			cout << "数组a和数组b不相等" << endl;
			break;
		}
	}

	vector<int> vectora(10, 1);
	vector<int> vectorb;
	for (int i = 0; i < 10; i++)
	{
		vectorb.push_back(i);
	}

	for (int i = 0; i < 10; i++)
	{
		if (!vectora[i] == vectorb[i])
		{
			cout << "Vector a 和 b 不相等" << endl;
			break;
		}
	}
	return 0;
}
