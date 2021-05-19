#include <iostream>
int main()
{
    int smallest = 0, biggest = 0;
    std::cout << "please input two integers:";
    std::cin >> smallest >> biggest;

    if (smallest > biggest) {//首先按照判断输入数字大小，反了就调换
        int exchange = smallest;
        smallest = biggest;
        biggest = exchange;
    }

    while (smallest <= biggest) {//依次输出
        std::cout << smallest << " ";
        ++smallest;
    }
    std::cout << std::endl;

    return 0;
}