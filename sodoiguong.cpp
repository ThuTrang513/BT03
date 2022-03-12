#include<iostream>
#include<string>
using namespace std;
int stn(int n){
	int m = n;
	int stn = 0;
	while(n > 0){
		stn = stn * 10 + n % 10;
		n /= 10;
	}
	return(stn == m);
}
void output(int a,int b){
	int dem = 0;
	for(int i = a; i <= b; i++){
		if(stn(i))dem++;
	}
	cout << dem << endl;
}
int main(){
	/*int n;
	cin >> n;
	int a[n];
	for(int i = 0;i < n; i++){
		cin >> a[i];
	}*/
	int n; 
	cin >> n;
	int a,b;
	for(int i = 1; i <=n ;i++){
		cin >> a>> b;
		output(a,b);
	}
}
