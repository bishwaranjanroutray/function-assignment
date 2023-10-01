// Given two numbers a and b, write a function to print all odd numbers between them.
#include<iostream>
using namespace std;

void odd(int a,int b){
    for(int i=a;i<=b;i++){
        if(i%2!=0){
            cout<<i<<endl;
            }
    }
}

int main(){
    cout<<"enter two numbers:";
    int a,b;
    cin>>a>>b;
    odd(a,b);
}