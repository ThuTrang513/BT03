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
	int min = a[0], max = a[0], tongc = 0, deml = 0;
	for(int i = 0; i < n; i++){
		if(a[i] > max) max = a[i];
		else if(a[i] < min) min = a[i];
		if(a[i] % 2 == 0) tongc += a[i];
		else deml++;
	}
	cout << "min: " << min << endl;
	cout << "max: " << max << endl;
	cout << "tong so chan: " << tongc << endl;
	cout << "dem so le: " << deml << endl;
}
