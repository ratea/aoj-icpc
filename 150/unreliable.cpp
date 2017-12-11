#include "bits/stdc++.h"
using namespace std;

string cj(string s){
	string tmp(s.size(),0);
	for(int i=0;i<s.size()-1;i++){
		tmp[i]=s[i+1];
	}
	tmp[s.size()-1]=s[0];
	return tmp;
}

string cc(string s){
	string tmp(s.size(),0);
	for(int i=1;i<s.size();i++){
		tmp[i]=s[i-1];
	}
	tmp[0]=s[s.size()-1];
	return tmp;
}

string ce(string s){
	string tmp(s.size(),0);
	for(int i=0;i<s.size()/2;i++){
		tmp[i]=s[s.size()-s.size()/2+i];
		tmp[s.size()-s.size()/2+i]=s[i];
	}
	if(s.size()%2==1)tmp[s.size()/2]=s[s.size()/2];
	return tmp;
}

string ca(string s){
	string tmp(s.size(),0);
	for(int i=0;i<s.size();i++){
		tmp[i]=s[s.size()-1-i];
	}
	return tmp;
}

string cp(string s){
	for(int i=0;i<s.size();i++){
		if(s[i]>='0'&&s[i]<='8'){
			int x=s[i]-'0';
			x++;
			char c=x+'0';
			s[i]=c;
		}else if(s[i]=='9')s[i]='0';
	}
	return s;
}

string cm(string s){
	for(int i=0;i<s.size();i++){
		if(s[i]>='1'&&s[i]<='9'){
			int x=s[i]-'0';
			x--;
			char c=x+'0';
			s[i]=c;
		}else if(s[i]=='0')s[i]='9';
	}
	return s;
}

int main(){
	int x;
	cin>>x;
	for(int j=0;j<x;j++){
		string ji,s;
		cin>>ji>>s;
		
		for(int i=ji.size()-1;i>=0;i--){
			if(ji[i]=='J')s=cc(s);
			if(ji[i]=='C')s=cj(s);
			if(ji[i]=='E')s=ce(s);
			if(ji[i]=='A')s=ca(s);
			if(ji[i]=='P')s=cm(s);
			if(ji[i]=='M')s=cp(s);
		}
		cout<<s<<endl;
	}
}