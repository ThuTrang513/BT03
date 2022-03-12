#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0;i < n; i++){
		cin >> a[i];
	}
	bool ktr = true;
	for(int i = 0;i < n; i++){
		for(int j = 0; j < i; j++){
			if(a[i] == a[j]){
				ktr = false;
				break;
			}
		}
	}
	if(ktra == false){
		cout << "No";
	}
	else cout << "Yes";
}
