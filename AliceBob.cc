#include<iostream>
using namespace std;
int main(){
	int alice[3],bob[3];
	cin>>alice[0]>>alice[1]>>alice[2];
	cin>>bob[0]>>bob[1]>>bob[2];
	int alice_score=0;
	int bob_score=0;
	for(int i=0;i<3;i++){
		if(alice[i]>bob[i]){
			alice_score++;
		}
		else if(alice[i]<bob[i]){
			bob_score++;
		}
	}
	cout<<alice_score<<" "<<bob_score<<endl;
	return 0;
}
