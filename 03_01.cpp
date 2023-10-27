#include <iostream>
using namespace std ;

int main()
 {
    // 声明两个整数变量
    int num1, num2;

    // 提示输入第一个整数
    cout << "请输入第一个整数: ";
    cin >> num1;

    // 提示输入第二个整数
    cout << "请输入第二个整数: ";
    cin >> num2;

    // 使用if else语句比较两个整数的大小
    if (num1 < num2) {
        cout << num1 << " 小于 " << num2 << endl;
    } else if (num1 > num2) {
        cout << num1 << " 大于 " << num2 << endl;
    } else {
        cout << num1 << " 等于 " << num2 << endl;
    }

    return 0;
}