#include<iostream>
using namespace std;
int main(){
	long long int ar[10],n,sum=0;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>ar[i];
		cout<<endl;
	for(int i=0;i<n;i++)
		sum=sum+ar[i];
	cout<<sum<<" "<<endl;
	return 0;
}
