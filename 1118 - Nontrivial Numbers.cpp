#include<bits/stdc++.h>
using namespace std;
double trivial(int n){
    double sum = 0;
    double k=n;
    for(int i=1;i<=sqrt(k);i++){
        if(n%i==0){
            if(n/i==i){
                sum+=i;
            }else{
                sum+=i;
                sum+=k/i;
            }
        }
    }
    return sum/k;
}
vector<int>prime(1010101,true);
double sieve(int n){
    for(int i=2;i*i<=n;i++){
        for(int j=i*i;j<=n;j+=i){
            prime[j]=false;
        }
    }
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int i,j;
  cin>>i>>j;
  if(i==1){
    cout<<1<<endl;
    return 0;
  }
  int d;
  sieve(j);
  int ans;
  bool found=false;
  for(int x=j;x>=i;x--){
    if(prime[x]){
        found=true;
        d=x;
        break;
    }
  }
  if(found){
    cout<<d<<endl;
    return 0;
  }else{
      double so=INT_MAX;
      for(int x=i;x<=j;x++){
        double k=trivial(x)-1;
        if(k<so){
            so=k;
            ans=x;
        }
      }
  }
  cout<<ans<<endl;
}
