#include<iostream>
using namespace std;
void great(int a,int b,int c,int d);
void great(int a,int b,int c,int d){
	if(a>b && a>c && a>d){
		cout<<a<<endl;
	}
	else if(b>a && b>c && b>d){
		cout<<b<<endl;
	}
	else if(c>a && c>b && c>d){
		cout<<c<<endl;
	}
	else{
		cout<<d<<endl;
	}
}

int main(){
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	great(a,b,c,d);
	//cout<<m<<endl;
	return 0;
}
