#include <iostream>
int main()
{
    std::cout << "2\x4d\012";//\x4d:字符M ， \012 换行符
    std::cout << "2\tM\n";//\t制表符， \n换行符

    return 0;
}
