#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int n,m;
  cin>>n>>m;
  vector<int>wheel(n);
  for(int i=0;i<n;i++){
    cin>>wheel[i];
  }
  int pos=0;
  while(m>0){
    m--;
    pos++;
    if(pos==wheel.size()){
        pos=0;
    }
  }
  for(int i=0;i<10;i++){
    cout<<wheel[pos];
    pos++;
    if(pos==wheel.size()){
        pos=0;
    }
  }
  cout<<endl;
}
