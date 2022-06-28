#include<iostream>
using namespace std;

void Print(int N){
    if(N>0){ // base condition
    Print(N-1); // hypothesis
    cout<<N<<" "; // induction
    }
}

int main(){
    int num;
    cout<<"\n Enter any number : ";
    cin>>num;
    Print(num);
    return 0;
}