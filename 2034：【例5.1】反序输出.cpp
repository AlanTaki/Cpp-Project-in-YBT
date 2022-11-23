//头文件部分
#include<iostream>
#include<stdio.h>
#include<math.h>
#include<string>
#include<algorithm> 
//将一些较长的数据类型改短
typedef long long ll;
typedef double db;
using namespace std;
//初始化数组a，长整型 m，n
ll a[114],m,n = 1;
//主函数
int main(){
    //循环输入
    while(cin >> m){
      //将输入的数放入数组a
    	a[n] = m;
      n++;
    }
    //循环逆序输出
    for(int i = n - 1;i >= 1;i--)
        cout << a[i] << ' ';
    }
    //结束
    return 0;
}
