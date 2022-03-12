#include<iostream>
#include<string>
using namespace std;
int check(string a){
	int len = a.length();
	int m = len/2; 
	for(int i = 0; i < m; i++){
		if(a[i] != a[len-1-i]){
			return false;
		}
	}
	return true;
}

int main(){
	/*int n;
	cin >> n;
	int a[n];
	for(int i = 0;i < n; i++){
		cin >> a[i];
	}*/
	string a;
	cin >> a;
	if(check(a)) cout << "Yes";
	else cout << "No";
}
