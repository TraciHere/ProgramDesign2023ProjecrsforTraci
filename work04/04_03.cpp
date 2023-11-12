#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // 由于100位整数的要求，这里将变量声明为long double类型
    long double a, b;
    cin >> a >> b;

    // 初始化x为0
    long double x = 0;

    // 循环计算x，直到满足条件
    while (!(pow(a, x) <= b && b < pow(a, x + 1))) {
        x++;
    }

    // 输出结果
    cout << static_cast<int>(x) << endl;

    return 0;
}