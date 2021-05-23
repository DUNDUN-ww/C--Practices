#include<iostream>
#include<vector>

using std::cin;
using std::vector;

int main()
{
    vector<int> v1;
    int i;
    while (cin >> i)
    {
        v1.push_back(i);//依次把i放到v1
    }
    return 0;
}
