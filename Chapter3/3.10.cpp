#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;

int main()
{
    string str_in, str;
    getline(cin, str_in);
    for (auto c : str_in)
        if (!ispunct(c))
            str += c;
    cout << str << endl;
    return 0;
}
