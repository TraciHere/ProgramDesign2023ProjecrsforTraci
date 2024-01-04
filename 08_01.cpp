#include <iostream>
#include <list>

int main() {
    std::list<int> myList;
    int num;

    std::cout << "以空格为间隔，输入一系列整数（当输入非整数时结束）:\n";

    while (std::cin >> num) {
        myList.push_back(num);
    }

    if (!myList.empty()) {
        myList.pop_front(); //掐头
        myList.pop_back();  //去尾
    }

    std::cout << "剩余的链表：\n";
    for (const auto &element : myList) {
        std::cout << element << " ";
    }

    return 0;
}