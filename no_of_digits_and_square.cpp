// Write a function to count the number of digits in a number and then print the square of this number.
#include<iostream>
using namespace std;

int square(int a){
    int s;
    s=a*a;
    return s;
}

int number(int a){
    int c=0;
    int n=a;
    while(n>0){
        c++;
        n/=10;
    }
    return c;
}

int main(){
    cout<<"enter the number:";
    int a;
    cin>>a;
    cout<<"count of digits:"<<number(a)<<endl;
    cout<<"square of count of digits:"<<square(number(a));
}