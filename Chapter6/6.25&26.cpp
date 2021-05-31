#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv)//实参列表,argv指向*char
{
    string str;
    for (int i = 1; i != argc; ++i) {
     //一定要记得可选参数从argv[1]开始，argv[0]保存的是程序的名字。
        str += argv[i];
        str += " ";
    }

    cout << str << endl;
    return 0;
}
