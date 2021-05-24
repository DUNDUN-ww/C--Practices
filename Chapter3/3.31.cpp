#include<iostream>
#include<cstddef>

using std::cout;

int main()
{
    int ia[10];
    for (size_t ix = 0; ix < 10; ix++)
    {
        ia[ix] = ix;
    }
    for (auto i : ia)
        cout << i << " ";
    return 0;
}
