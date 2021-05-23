#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
    vector<int> v1;
    cout << v1.size() << endl;
    if (v1.begin() != v1.end())
    {
        for (auto it = v1.cbegin(); it != v1.cend(); ++it)
            cout << *it << endl;
    }

    vector<int> v2(10);
    cout << v2.size() << endl;
    if (v2.begin() != v2.end())
    {
        for (auto it = v2.cbegin(); it != v2.cend(); ++it)
            cout << *it << endl;
    }

    vector<int> v3(10, 42);
    cout << v3.size() << endl;
    if (v3.begin() != v3.end())
    {
        for (auto it = v3.cbegin(); it != v3.cend(); ++it)
            cout << *it << endl;
    }

    vector<int> v4{ 10 };
    cout << v4.size() << endl;
    if (v4.begin() != v4.end())
    {
        for (auto it = v4.cbegin(); it != v4.cend(); ++it)
            cout << *it << endl;
    }

    vector<int> v5{ 10, 42 };
    cout << v5.size() << endl;
    if (v5.begin() != v5.end())
    {
        for (auto it = v5.cbegin(); it != v5.cend(); ++it)
            cout << *it << endl;
    }

    vector<string> v6{ 10 };
    cout << v6.size() << endl;
    if (v6.begin() != v6.end())
    {
        for (auto it = v6.cbegin(); it != v6.cend(); ++it)
            cout << *it << endl;
    }

    vector<string> v7{ 10, "hi" };
    cout << v7.size() << endl;
    if (v7.begin() != v7.end())
    {
        for (auto it = v7.cbegin(); it != v7.cend(); ++it)
            cout << *it << endl;
    }

    return 0;
}
