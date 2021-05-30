#include <iostream>

void reset(int &i)
{
    i = 0;
}

int main()
{
    int i = 42;
    std::cout << i << std::endl;
    reset(i);
    std::cout << i << std::endl;
    return 0;
}
