#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> va(4, 8);
    int ia[4];

    for (int i = 0; i < 4; i++)   ia[i] = va[i];

    for (auto i : ia)   cout << i << " ";
    cout << endl;

    return 0;
}
