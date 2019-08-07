#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int n,exit;
  cin>>n>>exit;
  vector<int>obstacles(n);
  obstacles.push_back(0);
  bool neg=false,po=false,cut=false;
  for(int i=0;i<n;i++){
    cin>>obstacles[i];
    if((obstacles[i]>exit&&exit<0&&obstacles[i]<0)||(obstacles[i]<exit&&exit>0&&obstacles[i]>0)){
        cut=true;
    }
    if(obstacles[i]<0){
        neg=true;
    }else{
        po=true;
    }
  }
  if(exit<0&&!po){
    cout<<"Impossible"<<endl;
    return 0;
  }else if(exit>0&&!neg){
    cout<<"Impossible"<<endl;
    return 0;
  }
  sort(obstacles.begin(),obstacles.end());
  int pos = lower_bound(obstacles.begin(),obstacles.end(),0)-obstacles.begin();
  if(n<1||cut){
    cout<<"Impossible"<<endl;
    return 0;
  }else{
    int dist1=abs(exit);
    int dist2;
    if(exit<0){
        dist2=(abs(obstacles[pos+1])*2)+dist1;
    }else{
        dist2=(abs(obstacles[pos-1])*2)+dist1;
    }
    if(exit<0){
        cout<<dist2<<" "<<dist1<<endl;
    }else{
        cout<<dist1<<" "<<dist2<<endl;
    }
  }
}
