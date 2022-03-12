#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i =0; i < n; i++){
		cin >> a[i];
	}
	int tong = 0;
	for(int i = 0; i< n; i++){
		tong += a[i];
	}
	double tb = 1.0*tong/n;
	cout << fixed <<setprecision(2);
	
	cout << tb << " ";
	tong = 0;
	for(int i = 0; i< n; i++){
		tong += (a[i] - tb)*(a[i] - tb);
	}
	cout << 1.0*tong/n;
}
