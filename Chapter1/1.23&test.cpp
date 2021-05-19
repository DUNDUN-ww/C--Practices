#include <iostream>
#include "Sales_item.h"
int main()
{
    Sales_item currentItem, newItem;
    if (std::cin >> currentItem) {
        int cnt = 1;
        while (std::cin >> newItem) {
            if (currentItem.isbn() == newItem.isbn() )
                ++cnt;
            else {
                std::cout << "The number of " << currentItem.isbn() << " is " << cnt << std::endl;
                currentItem = newItem;
                cnt = 1;
            }
        }

        std::cout << "The number of " << currentItem << " is " << cnt << std::endl;
    }
    return 0;
}

// 测试数据:
//0-201-78345-X 4 25.0
// 0-201-78345-X 1 25.0
// 0-201-78345-X 2 25.0
// 0-201-78345-X 9 25.0
// 0-207-78345-X 9 31.0
// 0-207-78345-X 3 31.0
// 0-202-78345-X 3 20.0
// 0-202-78345-X 3 20.0
// 运行结果:
// 0-201-78345-X 4
// 0-207-78345-X 2
// 0-202-78345-X 2
