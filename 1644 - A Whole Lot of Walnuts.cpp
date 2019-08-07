#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin>>n;
  if(n==0){
    cout<<"10"<<endl;
    return 0;
  }else if(n==1){
    int k;
    string f;
    cin>>k>>f;
    if(f=="hungry"||k<=2){
        cout<<"10"<<endl;
    }else{
        cout<<k<<endl;
    }
    return 0;
  }
  vector<int>s;
  vector<int>h;
  for(int i=0;i<n;i++){
    int x;
    string state;
    cin>>x>>state;
    if(state=="hungry"){
        h.push_back(x);
    }else{
        s.push_back(x);
    }
  }
  sort(h.begin(),h.end());
  sort(s.begin(),s.end());
  if(s.size()==0){
    cout<<10<<endl;
    return 0;
  }else if(h.size()==0){
     if(s[0]<=2){
        cout<<10<<endl;
     }else{
        cout<<s[0]<<endl;
     }
     return 0;
  }
  if(s[0]<=h[h.size()-1]){
    cout<<"Inconsistent"<<endl;
  }else{
    cout<<s[0]<<endl;
  }
}
