#include <iostream>
using namespace std;

int main(){
int qimo,banji,lunwen,n,i,sum=0;
char name[100][100];/*名字单独用一个数组储存*/
char ganbu,xibu;
int x[100]={0};/*储存奖学金总额*/
cin>>n;
for(i=0;i<n;i++){
    cin>>name[i];
    cin>>qimo>>banji>>ganbu>>xibu>>lunwen;
    if(qimo>80&&lunwen>0){//院士奖学金
        x[i]+=8000;
    }
    if(qimo>85&&banji>80){//五四奖学金
        x[i]+=4000;
    }
    if(qimo>90){//成绩优秀奖学金
        x[i]+=2000;
    }
    if(qimo>85&&xibu=='Y'){//西部奖学金
        x[i]+=1000;
    }
    if(qimo>80&&ganbu=='Y'){//班级贡献奖
        x[i]+=850;
    }
}
int max=x[0];//设置一个值来寻找奖学金金额最大的值
int m=0;
/*这里一开始我没有在声明m时初始化，
这导致了编译器认为当n=0时for循环不会执行
且此时m不会初始化，可能在后续访问未初始化的变量m，
导致百练runtime error了很多次*/
for(i=0;i<n;i++){
/*遍历每个奖学金，
每次遇到更高金额就将这个值赋给max，
同时用m记录这个金额对应的编号*/
    if(max<x[i]){
        max=x[i];
        m=i;
    }
    sum+=x[i];
}
cout<<name[m]<<endl;
cout<<x[m]<<endl;
cout<<sum;
return 0;
}