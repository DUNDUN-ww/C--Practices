#include <iostream>
#include <initializer_list>
using namespace std;
int sum(initializer_list<int> const& addi)
{
    int sum = 0;
    for (auto i : addi) sum += i;
    return sum;
}

int main(void)
{
    auto il = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    cout << sum(il) << endl;

    return 0;
}
