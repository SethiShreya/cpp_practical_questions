#include<bits/stdc++.h>
using namespace std;

int main(){
    int a=0, b=0, c=0;
    cout<<"Enter the value: ";
    cin>>a;
    while(a!=0){
        b= a%10;
        c= (c*10)+b;
        a/=10;
    }   
    cout<<"Reverse value is "<<c;
    return (0);
}   