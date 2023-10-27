#include <iostream>
using namespace std;

int main() {
    int dayNumber;

    // 提示输入一个正整数
    cout << "请输入一个正整数: ";
    cin >> dayNumber;

    // 计算除以7的余数
    int remainder = dayNumber % 7;

    // 使用switch语句根据余数输出星期几
    switch (remainder) {
        case 0:
            cout << "星期日" << endl;
            break;
        case 1:
            cout << "星期一" << endl;
            break;
        case 2:
            cout << "星期二" << endl;
            break;
        case 3:
            cout << "星期三" << endl;
            break;
        case 4:
            cout << "星期四" << endl;
            break;
        case 5:
            cout << "星期五" << endl;
            break;
        case 6:
            cout << "星期六" << endl;
            break;
    }

    return 0;
}