#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int k=n;
  int x=1;
  vector<int>ans;
  if(n==0){
    cout<<10<<endl;
    return 0;
  }else if(n==1){
    cout<<1<<endl;
    return 0;
  }else{
      while(1){
        bool found=false;
        for(int i=9;i>=2;i--){
            if(n%i==0){
                n/=i;
                ans.push_back(i);
                x*=i;
                i=10;
                found=true;
            }
        }
        if(!found)break;
      }
  }
  if(k==x){
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
    }
    cout<<endl;
  }else{
    cout<<-1<<endl;
  }
}
