#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin>>n;
  priority_queue<double>population;
  for(int i=0;i<n;i++){
    double k;
    cin>>k;
    population.push(k);
  }
  cout<<fixed;
  cout<<setprecision(2);
  while(population.size()>1){
      double a = population.top();
      population.pop();
      double b = population.top();
      population.pop();
      population.push(2.0*sqrt(a*b));
  }
  cout<<population.top()<<endl;
}
