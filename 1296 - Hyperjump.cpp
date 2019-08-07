#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin>>n;
  if(n==0){
    cout<<0<<endl;
    return 0;
  }
  vector<int>val(n);
  for(int i=0;i<n;i++){
    cin>>val[i];
  }
  int dp[n];
  dp[0]=val[0];
  int ans = val[0];
  for(int i=1;i<n;i++){
    dp[i]=max(dp[i-1]+val[i],val[i]);
    ans=max(ans,dp[i]);
  }
  cout<<max(ans,0)<<endl;
}
