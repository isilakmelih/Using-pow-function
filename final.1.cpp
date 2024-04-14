#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int k,n;
	double term,t;
	term=0;
	n=100;
	for(k=1;k<=n;k++){
		t=pow(-1,k+1)/(2*k);
		term=term+t;
				
	}
	cout<<"the result="<<term;
	return 0;}
	
