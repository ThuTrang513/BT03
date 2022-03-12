#include<iostream>
#include<string>
using namespace std;
int main(){
   int a, b,C;
   cin >> a >> b;
   int x[a][b];
   int t = 1,m = a,n= b,p = 0;
   while(t <= a*b){
   		for(int i = p; i < n;i++){
   			x[p][i] = t++;
		}
		for(int i = p+1; i < m;i++){
   			x[i][n-1] = t++;
		}
		for(int i = n-2; i >= p;i--){
   			x[m-1][i] = t++;
		}
		for(int i = m-2; i >p;i--){
   			x[i][p] = t++;
		}
		p++;
		m--;
		n--;
   }
   for(int i = 0; i < a; i++){
   	for(int j = 0; j < b; j++){
   		cout << x[i][j] << " ";
	   }
	   cout << endl;
   }
	return 0;	
}
