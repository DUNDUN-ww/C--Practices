#include <iostream>//使用at、下标运算符、front 和 begin 提取一个vector中的第一个元素。在一个空vector上测试你的程序。
#include <vector>

int main()
{
    std::vector<int> v;
    std::cout << v.at(0);       // 抛出一个out of range 异常
    std::cout << v[0];          // Segmentation fault: 11
    std::cout << v.front();     // Segmentation fault: 11
    std::cout << *v.begin();    // Segmentation fault: 11
    return 0;
}
