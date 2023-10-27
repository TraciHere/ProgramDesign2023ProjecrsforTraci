#include <iostream>
using namespace std;

int main() {
    int numberOfRows;

    // 提示输入金字塔的行数
    cout << "请输入金字塔的行数: ";
    cin >> numberOfRows;

    int i = 1;// i代表当前行数
    while (i <= numberOfRows) {
        int j = 1;
        
        // 打印空格以居中金字塔，空格数为总行数减去当前行数
        while (j <= numberOfRows - i) {
            cout << " ";
            j++;
        }

        int k = 1;
        // 打印*号来构建金字塔，*号个数等于当前行数的2倍减去1
        while (k <= 2 * i - 1) {
            cout << "*";
            k++;
        }

        // 换行以绘制下一行，并增加行计数
        cout << endl;
        i++;
    }

    return 0;
}