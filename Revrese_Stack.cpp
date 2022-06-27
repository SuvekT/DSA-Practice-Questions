#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void insert(stack<int>&s, int ele){
    if(s.size()==0){
        s.push(ele);
        return;
    }
    int temp=s.top();
    s.pop();
    insert(s,temp);
    s.push(temp);
    return;
}
void reverse(stack<int>&s){

    if(s.size()==1){
         return;
    }
    int temp=s.top();
    s.pop();
    reverse(s);
    insert(s,temp);
    return;
}

int main(){
    stack<int> s;
    s.push(5);
    s.push(3);
    s.push(0);
    s.push(1);
    cout<<"\n Before reversing ,top is : "<<s.top();
    reverse(s);
    cout<<"\n After reversing ,top is : "<<s.top();
    return 0;
}