#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n], b[10] = {0,0,0,0,0,0,0,0,0,0};
	for(int i =0; i < n; i++){
		cin >> a[i];
		b[a[i]] ++;
	}
	
	for(int i = 0; i <= 9; i++){
		cout << i <<": " << b[i] << endl;
	}
    return 0;
}
