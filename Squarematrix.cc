#include <bits/stdc++.h>
using namespace std;
int diagonalDifference(int arr[3][3],int n);
int diagonalDifference(int arr[3][3],int n){
        int i,j,c=0,d=0,sum;
        for(i=0;i<n;i++){
                for(j=0;j<n;j++){
                        if (i == j)
                                c += arr[i][j];
                        if (i == n - j - 1)
                                d += arr[i][j];
                }
        }
        sum=abs(c-d);
        return sum;
}
int main(){
        int arr[3][3],n,i,j;
        cin>>n;
        for(i=0;i<n;i++){
                for(j=0;j<n;j++){
                        cin>>arr[i][j];
                }
        }
       int k= diagonalDifference(arr,n);
        cout<<k<<endl;
        return 0;
}













