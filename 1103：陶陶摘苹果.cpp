#include<iostream>
using namespace std;
int a[11],s,ans;
int main(){
	for(int i = 1;i <= 10 ;i++){
		cin >> a[i];
	}
	cin >> s;
	for(int i = 1;i <= 10 ;i++){
		if(a[i] <= s + 30){
			ans++;
		}
	}
	cout << ans;
	return 0;
}
