#include<bits/stdc++.h>
using namespace std;
void write(vector<string>&x){
    for(int i=0;i<x.size();i++){
        cout<<x[i]<<endl;
    }
    cout<<endl;
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin>>n;
  vector<string>input;
  for(int i=0;i<n;i++){
    cin.ignore();
    string h1;
    getline(cin,h1);
    input.push_back(h1);
    string h;
    cin>>h;
    input.push_back(h);
  }

  vector<string>one;
  vector<string>two;
  vector<string>three;
  vector<string>four;
  for(int i=1;i<n*2;i+=2){
    if(input[i]=="Slytherin"){
        one.push_back(input[i-1]);
    }else if(input[i]=="Hufflepuff"){
        two.push_back(input[i-1]);
    }else if(input[i]=="Gryffindor"){
        three.push_back(input[i-1]);
    }else{
        four.push_back(input[i-1]);
    }
  }
  cout<<"Slytherin:"<<endl;
  for(int i=0;i<one.size();i++){
        cout<<one[i]<<endl;
    }
    cout<<endl;
  cout<<"Hufflepuff:"<<endl;
  write(two);
  cout<<"Gryffindor:"<<endl;
  write(three);
  cout<<"Ravenclaw:"<<endl;
  write(four);
}
