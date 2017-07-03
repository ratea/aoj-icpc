#include<iostream>
#include<vector>
using namespace std;

int main(){
	while(1){
		int m,n;
		cin>>m>>n;
		if(n==0&&m==0)break;
		vector<bool> so(7368792,true);
		int i;
		int ans=0;
		for(i=m;i<7368792;i++){
			if(so[i]){
				for(int j=i*2;j<7368792;j+=i)so[j]=false;
				ans++;
				//cout<<i<<endl;
			}
			if(ans>n)break;
		}
		cout<<i<<endl;
	}
	return 0;
}