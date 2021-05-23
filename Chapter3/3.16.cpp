#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
    vector<int> v1;
    cout << v1.size() << endl;
    if (!v1.empty())
    {
        for (auto i : v1)
            cout << i << endl;
    }

    vector<int> v2(10);
    cout << v2.size() << endl;
    if (!v2.empty())
    {
        for (auto i : v2)
            cout << i << endl;
    }

    vector<int> v3(10, 42);
    cout << v3.size() << endl;
    if (!v3.empty())
    {
        for (auto i : v3)
            cout << i << endl;
    }

    vector<int> v4{ 10 };
    cout << v4.size() << endl;
    if (!v4.empty())
    {
        for (auto i : v4)
            cout << i << endl;
    }

    vector<int> v5{ 10, 42 };
    cout << v5.size() << endl;
    if (!v5.empty())
    {
        for (auto i : v5)
            cout << i << endl;
    }

    vector<string> v6{ 10 };
    cout << v6.size() << endl;
    if (!v6.empty())
    {
        for (auto i : v6)
            cout << i << endl;
    }
    
    vector<string> v7{ 10, "hi" };
    cout << v7.size() << endl;
    if (!v7.empty())
    {
        for (auto i : v7)
            cout << i << endl;
    }

    return 0;
}
