#include <iostream>
#include <cctype>
using namespace std;
//因为百练一直不accept这个代码改了很多次所以注释写得比较多，有的可能不是特别必要只是为了我理清思路

int main() {
    //声明一个字符串类型的变量
    string input;
    //提示输入
    cout << "请输入字符串: ";
    //从标准输入流中读取一行文本，并将读取的内容储存在input中
    getline(cin, input);

    //遍历input中的每个字符，声明了一个引用变量c指向当前遍历到的字符
    for (char &c : input) {
        //百练没accept，加了一个判断是否是字母以保留空格和标点
        if (isalpha(c)){
        //检查当前字符是否是大写
            if (isupper(c)) {
                //是大写字符则转换为小写
                c = tolower(c);
            } else if (islower(c)) {
                //是小写字符则转化为大写
                c = toupper(c);
            }
        }
    }
    //输出替换后的字符串
    cout << "替换后的字符串: " << input << endl;

    return 0;
}