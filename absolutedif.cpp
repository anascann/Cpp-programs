// program to print the absolute diffrence of two numbers
 #include<iostream>

using namespace std;

int main()
{
	int n,m;
	int dif;
	cout<<"enter the two numbers"<<endl;
	cin>>n>>m;
	dif=n-m;
	if(dif<0){
		dif=dif*(-1);
		cout<<" diffrence is "<<dif<<endl;
	}else
	cout<<" diff is"<<dif;
}
