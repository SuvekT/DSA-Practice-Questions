#include<bits/stdc++.h>
#include<iostream>
using namespace std;


void insert(stack<int>&s,int temp){
    if(s.size()==0 || s.top()<=temp){
        s.push(temp);
        return;
    }
    int val=s.top();
    s.pop();
    insert(s,temp);
    s.push(val);
    return;
}

void sort(stack<int> &s){
    if(s.size()==1)
    return;
    int temp=s.top();
    s.pop();
    sort(s);
    insert(s,temp);
    return;
}


int main(){
    stack<int> s;
    s.push(5);
    s.push(3);
    s.push(0);
    s.push(1);
    cout<<"\n Before sorting ,top is : "<<s.top();
    sort(s);
    cout<<"\n After sorting ,top is : "<<s.top();
    return 0;
}