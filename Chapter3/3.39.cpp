#include<iostream>
#include<string>
#include<cstring>

using namespace std;

int main()
{
    string s1 = "aaAaa";
    string s2 = "aaAaa";

    if (s1 == s2)
    {
        cout << "两个字符串相等" << endl;
    }
    else
    {
        cout << "两个字符串不相等" << endl;
    }

    char ca1[] = "aaAaa";
    char ca2[] = "aaAaa";
    if (strcmp(ca1, ca2) == 0)
    {
        cout << "两个字符串相等" << endl;
    }
    else
    {
        cout << "两个字符串不相等" << endl;
    }
    return 0;
}
