//program to count the number of vowels provided by the user.

#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
	int a=0, e=0, i=0, o=0, u=0;
	string s;
	int j;
	int len;
	cout<<"enter your sweetheart's name'"<<endl;
	cin>>s;
	len=s.length();
	cout<<" now going to count the number of vowels in the name"<<endl;
	for(j=0; j<=len; j++){
		if(s[j]=='a'){
			a++;
		}else if(
		s[j]=='e'){
		e++;}
		else if(
		s[j]=='i'){
		i++;}
		else if(
		s[j]=='o'){
		o++;}
		else if(s[j]=='u'){
			u++;
		}
	}
		cout<<"a"<<" "<<a<<endl;
		cout<<"e"<<" "<<e<<endl;
		cout<<"i"<<" "<<i<<endl;
		cout<<"o"<<" "<<o<<endl;
		cout<<"u"<<" "<<u<<endl;
	
	
	return 0;
	
}
