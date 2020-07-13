#include <bits/stdc++.h>
using namespace std;

#define mod 1000000000


int main()
{
	int n;
	cin>>n;
	
	long arr[1000][1000];

	for(int i=0;i<=n;i++){
		for(int j=0;j<=i;j++){
			if(j==0) arr[i][j] = 1;
			if(i==j) arr[i][j] = 1;
			else {
				arr[i][j] = (arr[i-1][j-1]%mod + arr[i-1][j]%mod)%mod;
			}
		}
	}
	
	
		
	for(int i=0;i<=n;i++){
		for(int j=0;j<=i;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
