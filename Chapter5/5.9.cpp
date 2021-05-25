#include <iostream>

using namespace std;

int main()
{
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
	char ch;
	while (cin >> ch)
	{
		if (ch == 'a') ++aCnt;
		else if (ch == 'e') ++eCnt;
		else if (ch == 'i') ++iCnt;
		else if (ch == 'o') ++oCnt;
		else if (ch == 'u') ++uCnt;
	}
	cout << "元音a的数量: \t" << aCnt << '\n'
		  << "元音e的数量: \t" << eCnt << '\n'
		  << "元音i的数量: \t" << iCnt << '\n'
		  << "元音o的数量: \t" << oCnt << '\n'
		  << "元音u的数量: \t" << uCnt << endl;

	return 0;
}
