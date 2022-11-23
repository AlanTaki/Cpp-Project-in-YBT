#include<iostream>
#include<stdio.h>
using namespace std;
int n,a[102];
double b,c,d,e;
int main(){
	cin >> n;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
		if(a[i] <= 18){
			b++;
		}
		else if(a[i] <= 35){
			c++;
		}
		else if(a[i] <= 60){
			d++;
		}
		else{
			e++;
		}
	}
	b = b / n * 100;
	c = c / n * 100;
	d = d / n * 100;
	e = e / n * 100;
	printf("%.2lf%c\n",b,'%');
	printf("%.2lf%c\n",c,'%');
	printf("%.2lf%c\n",d,'%');
	printf("%.2lf%c\n",e,'%');
	return 0;
}
