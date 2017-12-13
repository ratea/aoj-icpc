#include "bits/stdc++.h"
using namespace std;

int a,b,c;
int np;
int ans=0;

int dfs(int x,int d){
	d++;
	if(d==b){
		if(np==c)ans++;
		return 0;
	}
	if(d<b){
		for(int i=x+1;i<=a;i++){
			np+=i;
			dfs(i,d);
			np-=i;
		}
	}
	return 0;
}

int main(){
	while(cin>>a>>b>>c){
		ans=0;
		if(a==0&&b==0&&c==0)break;
		for(int i=1;i<=a;i++){
			np=i;
			dfs(i,0);
		}
		cout<<ans<<endl;
	}
	return 0;
}