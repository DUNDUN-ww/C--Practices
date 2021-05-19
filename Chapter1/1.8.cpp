#include <iostream>
int main()  //缺少右引号，并且对下一行造成影响
{
	std::cout << "/*";
	std::cout << "*/";
	std::cout << /* "*/" */"; //加个右引号就行了
	std::cout << /* "*/" /* "/*" */;

	return 0;
}