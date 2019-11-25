#include<iostream>

using namespace std;

int main()
{
    char a[100];
    char b[100];
    int n,m;
    int i,j;
    int y=1;
	int z=1;
	int g,k;
    int count=0;
    cout<<"enter the len of that string a"<<endl;
    cin>>n;
    cout<<"enter the len of string b"<<endl;
    cin>>m;
    cout<<"enter the string a"<<endl;
    
    for(i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<" enter the string b"<<endl;
    for(j=0; j<m; j++)
    {
        cin>>b[j];
    }
    
    cout<<" the number of possible anagram in string a can be"<<endl;
    for(k=1; k<=n; k++)
    {
    	y=y*k;
	}cout<<"anagram of a is "<<y;
	
	cout<<" the number of possible anagram in string b can be "<<endl;
	for(g=1; g<=m; g++)
	{
		z=z*g;
	} cout<<" anagram of b is"<<z;
    return 0;
}

    
