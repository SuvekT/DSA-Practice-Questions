#include<bits/stdc++.h>
#include<iostream>
using namespace std;

 void solve(stack<int>&s,int k){
        if(k==1){
            s.pop();
            return;
        }
        int temp=s.top();
        s.pop();
        solve(s,k-1);
        s.push(temp);
        return;
    }
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        if(s.size()==0)
        return;
        int k=(sizeOfStack/2)+1;
        solve(s,k);
        return ;
        
    }

int main(){
    stack<int> s;
    s.push(0);
    s.push(1);
    cout<<"top : "<<s.top()<<endl;
   deleteMid(s,s.size());
   cout<<"top : "<<s.top()<<endl;
    return 0;
}