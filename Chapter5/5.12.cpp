#include <iostream>

using namespace std;

int main()
{
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, spaceCnt = 0, tabCnt = 0, newLineCnt = 0, ffCnt = 0, flCnt = 0, fiCnt = 0;
	char ch, prech = '\0';
	while (cin >> ch)
	{
		switch (ch)
		{
		case 'a':
		case 'A':
			++aCnt;
			break;
		case 'e':
		case 'E':
			++eCnt;
			break;
		case 'i':
			if (prech == 'f') ++fiCnt;
		case 'I':
			++iCnt;
			break;
		case 'o':
		case 'O':
			++oCnt;
			break;
		case 'u':
		case 'U':
			++uCnt;
			break;
		case ' ':
			++spaceCnt;
			break;
		case '\t':
			++tabCnt;
			break;
		case '\n':
			++newLineCnt;
			break;
		case 'f':
			if (prech == 'f') ++ffCnt;
			break;
		case 'l':
			if (prech == 'f') ++flCnt;
			break;
		}
		prech = ch;
	}

	cout << "元音a(A)的数量: \t" << aCnt << '\n'
		<< "元音e(E)的数量: \t" << eCnt << '\n'
		<< "元音i(I)的数量: \t" << iCnt << '\n'
		<< "元音o(O)的数量: \t" << oCnt << '\n'
		<< "元音u(U)的数量: \t" << uCnt << '\n'
		<< "空格的数量: \t"		<< spaceCnt << '\n'
		<< "tab的数量: \t"		<< tabCnt << '\n'
		<< "新行的数量: \t"		<< newLineCnt << '\n'
		<< "ff的数量: \t"		<< ffCnt << '\n'
		<< "fl的数量: \t"		<< flCnt << '\n'
		<< "fi的数量: \t"		<< fiCnt << endl;

	return 0;
}
