
#include<stdio.h> 
#include<math.h>
 
int main(){
	long long n;
	scanf("%lld",&n);
	int c=0,l=0; 
	while(n > 0)
	{
		int r = n%10;
		if(r%2==0)	
		++c; 
	else
	++l;
	n/=10; 
	}
if (c==l){
printf("YES");
}else{
printf("NO"); }}
