#include <iostream>

int main()
{
    int sum = 0;
    for (int value = 0; std::cin >> value; )
        sum += value;
    std::cout << sum << std::endl;
    return 0;
}
