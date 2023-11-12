#include <iostream>
using namespace std;
/*汉诺塔递归函数的核心是：当移动第n个盘子时需要先移开上面n-1个盘子，
然后移动第n个盘子，最后再移动前n-1个盘子*/

/*n:盘子的编号；a、b、c：三根柱子*/

/*我发现我好像没有move函数......*/

void hanoii(int n, char a, char b, char c){
    if (n > 0 ){
        hanoii(n-1, a, c, b);//n-1个盘子借助一根柱子进行两根柱子间的移动
        cout<<n<<":"<<a<<"-->"<<c<<endl;//第n个盘子只能前往上一步n-1个盘子移动的中间柱
        hanoii(n-1, b, a, c);//n-1个盘子借助一根柱子进行两根柱子间的移动
    }
    else return;
;
}

int main(){
    int n;
    char a,b,c;
    cin>>n>>a>>b>>c;
    hanoii(n, a, b, c);
}