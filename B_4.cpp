#include<iostream>
#include<iomanip>
using namespace std;
long long int gia_thua(long long int n){
	if(n == 0) return 1;
	long long int tich = 1;
	for(int i = 1; i <= n; i++){
		tich *= i;
	}
	return tich;
}
int main() {
	long long int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		for(int j = 0; j <= i; j++){
			cout << gia_thua(i)/(gia_thua(j)*gia_thua(i-j)) << " ";
		}
		cout << endl;
	}
	return 0;
}
