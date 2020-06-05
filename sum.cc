#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(){
	vector <int> v={1,2,3,4,10,11};
	cout<<v.size()<<endl;
	for(auto it=v.begin();it!=v.end();it++){
		cout<<*it<<" ";
	}
	cout<<endl;
	cout<<accumulate(v.begin(),v.end(),0)<<endl;
return 0;
}
