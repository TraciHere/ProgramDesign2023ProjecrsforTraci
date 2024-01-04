#include <iostream>
#include <deque>
using namespace std;

int main() {
    // 初始化队列为空
    deque<int> queue;

    // 从标准输入读取命令并执行
    while (true) {
        string command;
        getline(cin, command);

        if (command == "push") {
            // 如果命令是 push，则将元素推入队列中
            int value;
            cin >> value;
            queue.push_back(value);
            cout << "Pushed: " << value << endl;
        } else if (command == "pop") {
            // 如果命令是 pop，则从队列中弹出一个元素
            int value;
            if (!queue.empty()) {
                value = queue.front();
                queue.pop_front();
                cout << "Popped: " << value << endl;
            } else {
                cout << "Queue is empty." << endl;
            }
        } else if (command == "print") {
            // 如果命令是 print，则打印队列中的所有元素
            if (!queue.empty()) {
                cout << "Queue: ";
                while (!queue.empty()) {
                    cout << queue.front() << " ";
                    queue.pop_front();
                }
                cout << endl;
            } else {
                cout << "Queue is empty." << endl;
            }
        } else if (command == "exit") {
            // 如果命令是 exit，则退出程序
            break;
        } else {
            cout << "Type 'push', 'pop', 'print', or 'exit'.\n";
        }
    }

    // 程序结束
    return 0;
}