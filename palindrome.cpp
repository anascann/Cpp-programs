#include<iostream>
using namespace std;

void palindrome(int arr[], int n){
	int flag=0;
	int i,j;
	for(i=0; i<n/2 && n!=0; i++){
		if(arr[i]!=arr[n-i-1]){
			flag=1;
			break;
		
		}
	}
	if(flag==1){
		cout<<"no";
	}else
	cout<<"yes";
}

int main(){
	int arr[]={3,2,1,3,2};
	int n=sizeof(arr)/sizeof(arr[0]);
	palindrome(arr, n);
	
	return 0;
	
}
