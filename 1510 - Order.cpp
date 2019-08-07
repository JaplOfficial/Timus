#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin>>n;
  map<int,int>notes;
  int ans=0;
  int val;
  for(int i=0;i<n;i++){
    int k;
    cin>>k;
    notes[k]++;
    if(notes[k]>ans){
        ans=notes[k];
        val=k;
    }
  }
  cout<<val<<endl;
}
