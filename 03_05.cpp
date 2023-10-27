#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int lower = 200;
    int upper = 300;

    cout << "200到300之间的质数: " << endl;

    for (int num = lower; num <= upper; num++) {
        bool isPrime = true;

        for (int i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                isPrime = false;
                break; // 如果找到一个因子，跳出循环
            }
        }

        if (isPrime) {
            cout << num << " ";
        }
    }

    cout << endl;
    return 0;
}