#include<iostream>
#include<iomanip>
using namespace std;
void swap(double &a,double &b){
	double tmp = a;
	a = b;
	b = tmp;
}
void sapxep_T(int sv[],double T[], double L[],double A[], double TB[],int n){
	for(int i =0; i < n; i++){
		for(int j = i+1; j < n; j++){
			if(T[i] < T[j]){
				swap(sv[i],sv[j]);
				swap(T[i],T[j]);
				swap(L[i],L[j]);
				swap(A[i],A[j]);
				swap(TB[i],TB[j]);
			}
		}
	}
	cout << fixed << setprecision(1);
	cout << "Theo diem mon Toan:"<<endl;
	for(int i =0; i < n; i++){
		cout << "Sinh vien " << sv[i] << ": " << T[i] << " " <<
		 L[i] << " " <<
		 A[i] << endl;
	}
}
void sapxep_L(int sv[],double T[], double L[],double A[],double TB[], int n){
	for(int i =0; i < n; i++){
		for(int j = i+1; j < n; j++){
			if(L[i] < L[j]){
				swap(sv[i],sv[j]);
				swap(T[i],T[j]);
				swap(L[i],L[j]);
				swap(A[i],A[j]);
				swap(TB[i],TB[j]);
			}
		}
	}
	cout << fixed << setprecision(1);
	cout << "Theo diem mon Toan:"<<endl;
	for(int i =0; i < n; i++){
		cout << "Sinh vien " << sv[i] << ": " << T[i] << " " <<
		 L[i] << " " <<
		 A[i] << endl;
	}
}
void sapxep_TB(int sv[],double T[], double L[],double A[],double TB[] ,int n){
	for(int i =0; i < n; i++){
		for(int j = i+1; j < n; j++){
			if(TB[i] <= TB[j]){
				swap(sv[i],sv[j]);
				swap(T[i],T[j]);
				swap(L[i],L[j]);
				swap(A[i],A[j]);
				swap(TB[i],TB[j]);
			}
		}
	}
	cout << fixed << setprecision(1);
	cout << "Theo diem mon Toan:"<<endl;
	for(int i =0; i < n; i++){
		cout << "Sinh vien " << sv[i] << ": " << TB[i] << " "<< T[i] << " " <<
		 L[i] << " " <<
		 A[i] << endl;
	}
}
int main() {
	long long int n;
	cin >> n;
	int sv[n];
	double T[n], L[n], A[n], TB[n]; 
	for(int i =0; i < n; i++){
		sv[i] = i+1;
		cin >> T[i] >> L[i] >> A[i];
		TB[i] = (T[i] + L[i] + A[i])/3;
	}
	sapxep_T(sv, T,  L, A,TB,  n);
	sapxep_L(sv, T,  L, A, TB, n);
	sapxep_TB(sv, T,  L, A, TB ,  n);
}
/*3
9.0 6.0 7.5
6.0 7.0 4.5
8.0 8.5 6.0*/
