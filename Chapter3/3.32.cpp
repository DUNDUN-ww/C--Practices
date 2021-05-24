#include<iostream>
#include<cstddef>
#include<vector>

using namespace std;

int main()
{
     //vector 重写
    vector<int> iv;
    for (decltype(iv.size()) i = 0; i < 10; i++)//返回iv vector的类型
    {
        //sizeof（a）返回的是对象占用内存的字节数，而a.size()是string类定义的一个返回字符串大小的函数
        iv.push_back(i);
    }
    for (auto i : iv)
        cout << i << " ";
    return 0;
}
