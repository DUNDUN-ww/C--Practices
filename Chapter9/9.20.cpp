#include <iostream>
#include <deque>
#include <list>
using namespace std;

int main()
{
    list<int> l{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    deque<int> odd, even;
    for (auto i : l)
    {
      if(i%2 == 1) odd.push_back(i);
      else even.push_back(i);
    }
      //  (i & 0x1 ? odd : even).push_back(i);//& 0x1 判断i二进制的最后一位是否为1

    for (auto i : odd) cout << i << " ";
    cout << endl;
    for (auto i : even)cout << i << " ";
    cout << endl;

    return 0;
}
