#include "bits/stdc++.h"
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> imo(100003,0);
	for(int i=0;i<n;i++){
		int a,b;
		cin>>a>>b;
		imo[a]++;
		imo[b+1]--;
	}
	
	int ans=0;
	int sum=0;
	
	for(int i=0;i<100003;i++){
		sum+=imo[i];
		if(sum+1==i){
			ans=max(ans,sum);
		}else if(sum+1>i){
			ans=max(ans,i-1);
		}
	}
	
	cout<<ans<<endl;
	return 0;
}