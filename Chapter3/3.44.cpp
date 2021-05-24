#include<iostream>
#include<iterator>

using namespace std;

int main()
{

    using int_arrary = int[4];
    // typedef int int_array[4];

    int ia[3][4] =
    {
        {0, 1, 2, 3},
        {4, 5, 6, 7},
        {8, 9, 10, 11}
    };

    //版本1
    for (int_arrary &row : ia)
        for (int col : row)
            cout << col << " ";
    cout << endl;

    //版本2
    for (size_t i = 0; i != 3; i++)
    {
        for (size_t j = 0; j != 4; j++)
        {
            cout << ia[i][j] << " ";
        }
    }
    cout << endl;

    //版本3
    for (int_arrary* p = begin(ia); p != end(ia); p++)
        // for (int_arrary *p = ia; p != ia + 3; p++)
    {
        for (int* q = begin(*p); q != end(*p); q++)
            // for (int *q = *p; q != *p + 4; q++)
        {
            cout << *q << " ";
        }
    }
    cout << endl;

    return 0;
}
