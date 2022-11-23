#include<iostream>
#include<stdio.h>
using namespace std;
double a[11],s[11],sum;
int main(){
	for(int i = 1;i <= 10;i++){
		cin >> a[i];
	}
	s[1] = 28.9 * a[1];
	s[2] = 32.7 * a[2];
	s[3] = 45.6 * a[3];
	s[4] = 78.0 * a[4];
	s[5] = 35.0 * a[5];
	s[6] = 86.2 * a[6];
	s[7] = 27.8 * a[7];
	s[8] = 43.0 * a[8];
	s[9] = 56.0 * a[9];
	s[10] = 65.0 * a[10];
	for(int i = 1;i <= 10;i++){
		sum += s[i];
	}
	printf("%.1lf",sum);
	return 0;
}
