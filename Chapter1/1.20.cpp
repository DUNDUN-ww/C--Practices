#include <iostream>
#include "Sales_item.h"
int main(){
Sales_item book;//读入ISBN号、售出的册数以及销售价格

while (std::cin >> book ) //写入ISBN、售出的册数、总销售额和平均价格
	std::cout << book;//读入ISBN号、售出的册数以及销售价格
	std::cout << std::endl;
return 0;
}
