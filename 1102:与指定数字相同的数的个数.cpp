#include<iostream>
using namespace std;
int n,a[102],m,cnt;
int main(){
	cin >> n;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
	}
	cin >> m;
	for(int i = 1;i <= n;i++){
		if(a[i] == m){
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}
