#include<iostream>
using namespace std;

int main(){
	int a[10];
	int b[10];
	int i,j;
	cout<<" enter array a"<<endl;
	for(i=0; i<5; i++){
		cin>>a[i];
	}
	cout<<" enter array b"<<endl;
	for(j=0; j<5; j++){
		cin>>b[j];
	}
	
     for(i=0; i<5; i++){
     	for(j=i; j<5; j++){
     		
		 
     	if(a[i]==b[j]){
     	
     	cout<<"match found"<<endl;
     	break;
		 }
		 else{
		 	break;
		 	cout<<"match not found"<<endl;
		 }
	 }
			
}
}
