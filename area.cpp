// Write a function to take the radius of a circle as an argument and return its area.

#include<iostream>
using namespace std;

float area(int i){
    float a;
    a=3.14*i*i;
    return a;
}

int main(){
    cout<<"enter the radius of the circle:";
    int n;
    cin>>n;
    cout<<"the area of the circle is:"<<area(n);
    
}