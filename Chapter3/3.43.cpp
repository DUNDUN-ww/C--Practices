#include<iostream>
#include<iterator>

using namespace std;

int main()
{
    int ia[3][4] =
    {
        {0, 1, 2, 3},
        {4, 5, 6, 7},
        {8, 9, 10, 11}
    };

    //版本1使用范围for语句管理迭代过程
    for (const int(&row)[4] : ia)
        for (int col : row)
            cout << col << " ";
    cout << endl;

    //版本2用下标运算符
    for (size_t i = 0; i != 3; i++)
    {
        for (size_t j = 0; j != 4; j++)
        {
            cout << ia[i][j] << " ";
        }
    }
    cout << endl;

    //版本3用指针
    for (int(*p)[4] = begin(ia); p != end(ia); p++)
    {
        for (int *q = begin(*p); q != end(*p); q++)
        {
            cout << *q << " ";
        }
    }
    cout << endl;

    return 0;
}
