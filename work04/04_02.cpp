#include <iostream>
#include <vector>
using namespace std;
//斐波那契递归函数
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cin >> n;
//使用动态数组容器实现数组的输入
    vector<int> inputs(n);
    for (int i = 0; i < n; ++i) {
        cin >> inputs[i];
    }
//读取一行输出一行的结果
    for (int i = 0; i < n; ++i) {
        int result = fibonacci(inputs[i]);
        cout << result << endl;
    }

    return 0;
}