#include <iostream>
using namespace std;

int getbattery(int events){
	int sum;
	for(int i=0;i<events;i++){
		if(events=='+'){
			sum+=events;
			cout<<sum<<endl;
		}
		else{
			sum-=events;
			cout<<sum<<endl;
		}
	}
	return sum==50;
}

int main(){
	int events;
	cin>>events;
	getbattery(events);
	return 0;
}
