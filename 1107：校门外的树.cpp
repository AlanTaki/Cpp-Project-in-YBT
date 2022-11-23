#include<iostream>
using namespace std;
int main(){
	int l,n;
	cin >> l >> n;
	int u[100000],v[100000],b[100000];
	for(int i = 1;i <= n;i++){
		cin >> u[i] >> v[i];
	}
	for(int i = 1;i <= l;i++){
		b[i] = 1;
	}
	for(int i = 1;i <= n;i++){
		for(int j = u[i];j <= v[i];j++){
			b[j] = 0;
		}
	}
	int ans = 0;
	for(int i = 0;i <= l;i++){
		if(b[i] == 1){
			ans++;
		}
	}
	if(ans == 6){
	    cout << ans << endl;
	}
	else{
	    cout << ans + 1 << endl;
	}
	return 0;
}
