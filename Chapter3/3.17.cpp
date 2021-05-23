#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
    vector<string> str;
    string word;

    while (cin >> word)
    {
        str.push_back(word);
    }

    for (auto &s1 : str)
    {
        for (auto &s2 : s1)
            s2 = toupper(s2);//变大写
    }

    for (auto s : str)
        cout << s << endl;

    return 0;
}
