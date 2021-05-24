#include <iostream>
#include <cstring>
#include<vector>

using namespace std;
int main()
{
	int int_arr[] = { 0, 1, 2, 3, 4, 5 };
	// ivec有6个元素，分别是int_ arr中对应元素的副本
	vector<int> ivec(begin(int_arr), end(int_arr));

	for (auto i : ivec) {
		cout << i << "";
	}
		cout << endl;
		return 0;
}
