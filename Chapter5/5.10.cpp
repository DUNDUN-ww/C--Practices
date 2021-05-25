#include <iostream>
using std::cin; using std::cout; using std::endl;

int main()
{
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
	char ch;
	while (cin >> ch)
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
		}

	cout << "元音a(A)的数量: \t" << aCnt << '\n'
		<< "元音e(E)的数量: \t" << eCnt << '\n'
		<< "元音i(I)的数量: \t" << iCnt << '\n'
		<< "元音o(O)的数量: \t" << oCnt << '\n'
		<< "元音u(U)的数量: \t" << uCnt << endl;

	return 0;
}
