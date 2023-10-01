// Write a function to print squares of n natural numbers.
#include<iostream>
using namespace std;

int sq(int a){
    cout<<a*a<<endl;
}

int main(){
    cout<<"enter the number:";
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        sq(i);
    }
}