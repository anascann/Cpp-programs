#include<iostream>
using namespace std;
void num(int n){
	if(n<1){
	 return;
	}

	else{
	
	cout<<n;
	num(n-1);
	cout<<n;
	
}
}
int  main(){
	int n=3;
	num(3);
}
