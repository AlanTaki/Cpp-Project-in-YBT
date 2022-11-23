#include<iostream>
using namespace std;
long long n,a[1002],b[1002],sum;
int main(){
	cin >> n;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
	}
	for(int i = 1;i <= n;i++){
		cin >> b[i];
	}
	for(int i = 1;i <= n;i++){
		sum += a[i] * b[i];
	}
	cout << sum;
	return 0;
}
