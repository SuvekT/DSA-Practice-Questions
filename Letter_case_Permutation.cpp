#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void Solve(string ip,string op){
  if(ip.length()==0){
      cout<<op<<endl;
      return;
  }
  if(isalpha(ip[0])){
       string op1=op;
        string op2=op;
        op1.push_back(tolower(ip[0]));
        op2.push_back(toupper(ip[0]));
        ip.erase(ip.begin()+0);
        Solve(ip,op1);
        Solve(ip,op2);
        return;
  }
  else{
      string op1=op;
      op1.push_back(ip[0]);
      ip.erase(ip.begin()+0);
      Solve(ip,op1);
      return ;
  }
}

int main()
{
   string ip;
   cout<<"\n String : ";
   cin>>ip;
   string op="";
   Solve(ip,op);
    return 0;
}