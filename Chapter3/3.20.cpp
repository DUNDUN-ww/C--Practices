#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using namespace std;

int main()
{
	vector<int> vec;
	int i;
	while (cin >> i)
	{
		vec.push_back(i);
	}

	for (int i = 0; i < vec.size() - 1; ++i)
	{
		cout << vec[i] + vec[i + 1] << endl;
	}

	//---------------------------------
	cout << "第二问" << endl;

	int m = 0;
	int n = vec.size() - 1;
	while (m < n)
	{
		cout << vec[m] + vec[n] << endl;
		++m;
		--n;
	}
	return 0;
}
