#include<iostream>
#include<string>
using namespace std;
int main(){
   int a, b;
   cin >> a>> b;
   char s[a][100];
    for(int i = 0; i < a;i++){
   		for(int j = 0; j < b; j++){
   			cin >> s[i][j];
	   }
    }
	for(int i = 0; i < a;i++){
   		for(int j = 0; j < b; j++){
   			if(s[i][j] == '.'){
   				int dem = 0;	
				for(int t = (i == 0) ? i : i - 1;t <= i+1;t++){
   					for(int k = (j == 0) ? j : j-1; k <= j+1; k++){
   						if(s[t][k] == '*') dem++;
					}
				}		
				s[i][j] = '0' + dem;
			}
	   }
    }
	for(int i = 0; i < a;i++){
   		for(int j = 0; j < b; j++){
   			cout << s[i][j] << " ";
	   }
	   cout << endl;
    }	
}
