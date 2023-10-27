#include <iostream>
using namespace std;

int main() {
    int num, reversedNum = 0, digitCount = 0;

    // 提示输入一个整数
    cout << "请输入一个整数: ";
    cin >> num;

    do {
        // 通过取模获取最后一位数字
        int digit = num % 10;

        // 将最后一位数字追加到反向数字
        reversedNum = reversedNum * 10 + digit;

        // 去掉num的最后一位数字
        num /= 10;

        // 进行位数计数
        digitCount++;
    } while (num != 0);

    // 输出反向的整数
    cout << "反向输出整数: " << reversedNum << endl;

    // 输出位数
    cout << "位数: " << digitCount << endl;

    return 0;
}