#include<iostream>
using namespace std;
#include<vector>

int main(){
  while(1){
    int n;
    cin>>n;
    if(n==0)break;
    vector<int> a(n);
    for(int i=0;i<n;i++){
      string s;
      cin>>s;
      a[i]=s.size();
      //cout<<a[i]<<endl;
    }
    int ok=0;
    for(int i=0;i<n;i++){
      if(ok==1)break;
      int sum=0;
      int sta=0;
      int j=i;
      while(1){
        //cout<<sta<<" "<<sum<<endl;
        if(sta==0||sta==2){
          if(sum+a[j]==5){
            sta++;
            sum=0;
          }else{
            sum+=a[j];
            if(sum>5)break;
          }
        }else{
          if(sum+a[j]==7){
            sta++;
            if(sta==5){
              cout<<i+1<<endl;
              ok=1;
              break;
            }
            sum=0;
          }else{
            sum+=a[j];
            if(sum>7)break;
          }
        }
        j++;
      }
    }
  }
}
