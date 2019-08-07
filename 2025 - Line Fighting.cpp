#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin>>t;
  for(int i=0;i<t;i++){
    int n,k;
    cin>>n>>k;
    int tsize=n/k;
    int rem=n%k;
    vector<int>teams(k);
    if(n%k==0){
        for(int j=0;j<k;j++){
            teams.push_back(tsize);
        }
    }else{
        int ind=0;
        while(n>0){
            teams[ind]++;
            ind++;
            n--;
            if(ind==k){
                ind=0;
            }
        }
    }
    int ans = 0;
    sort(teams.begin(),teams.end());
    for(int j=0;j<teams.size();j++){
        for(int s=j+1;s<teams.size();s++){
            ans+=teams[j]*teams[s];
        }
    }
    cout<<ans<<endl;
  }
}
