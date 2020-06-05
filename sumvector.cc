#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
        int v[10],i=0,n=1,sum=0;
	cin>>n;
        for(int i=1;i<=n;i++){
                cin>>v[i];
		sum+=v[i];
        }
        cout<<sum<<endl;
return 0;
}
