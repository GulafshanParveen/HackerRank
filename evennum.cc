#include <iostream>
using namespace std;

int main(){
	int a,b;
	string num[9]={ "one","two","three","four","five","six","seven","eight","nine"};
	cin>>a>>b;
	if(a<9 && b<9){
		cout<<num[a]<<endl;
		cout<<num[b]<<endl;
	}
	if(a%2==0){
		cout<<"even"<<endl;
	}
	else{
		cout<<"odd"<<endl;
	}
	if(b%2==0){
		cout<<"even"<<endl;
	}else{
		cout<<"odd"<<endl;
	}
	return 0;
}
