#include <iostream>
#include "Sales_item.h"

int main() 
{
    Sales_item total;//写入ISBN、售出的册数、总销售额和平均价格
    std::cin >> total; //输入一个ISBN;
     Sales_item trans;//输入下一个ISBN
        while (std::cin >> trans) {
            if (total.isbn() == trans.isbn())
                total += trans;
            else {
                std::cout << total << std::endl;
                total = trans;
            }
        }
        std::cout << total << std::endl;
   return 0;
}