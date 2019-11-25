
#include<iostream>


using namespace std;

int main(){
	int* a=NULL;
	int i,n;
	int* b=NULL;
	int j,m;
	int d[n];
	int z;
	int* c=NULL;
	int l;
	cout<<"enter the lenght of first array you want"<<endl;
	cin>>n;
	a=new int[n];
	cout<<"now enter the elements you want to enter in array1"<<endl;
	for(i=0; i<n; i++)
	{
	cin>>a[i];
}
	cout<<"array 1 is"<<" ";
	for(i=0; i<n; i++)
	{
		a[n]=a[i];
		cout<<a[n]<<" ";
	}
	cout<<endl;
	
	cout<<"enter the lenght of second array you want to"<<endl;
	cin>>m;
	b=new int[m];
	cout<<"now enter the elements you want to enter in array 2"<<endl;
	for(j=0; j<m; j++){
		cin>>b[j];
	}
	cout<<"array2="<<" ";
	for(j=0; j<m; j++){
		b[m]=b[j];
		cout<<b[m]<<" ";
	}
	cout<<endl;
	
	cout<<"now we are heading to intersect these two arrays"<<endl;
	cout<<"press 1 to continue or press any key to move to UNION block"<<endl;
	cin>>z;
	if(z==1){
	cout<<"displaying the intersection results"<<endl;
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			if(a[i]==b[j])
			{
			d[n]=a[i];
			cout<<d[n]<<" ";
			}
		}
	}}
	else{
		cout<<"moving to union"<<endl;
		if(n>m){
			c[l]=a[n];
			for(i=0; i<n; i++)
			{
				for(j=0;j<m;j++){
					
				
				if(a[i]!=b[j])
				{cout<<b[j]<<" ";
				}
			}}
		} 
		else
		c[l]=b[m];
		for(j=0; j<m; j++)
		{
		    for(i=0; i<n; i++){
				
				if(b[j]!=a[i])
				{
					cout<<a[i]<<" ";
			}
	}
}
}

	return 0;
}
