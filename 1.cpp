#include<bits/stdc++.h>
using namespace std;


int main(){
    int i=0, sum=0, product=1, temp=0;
    cout<<"Enter the value: ";
    cin>>i;
    int x=i;
    while(i!=0){
        temp= i%10;
        sum+=temp;
        product*=temp;
        i/=10;
    }
    cout<<"Sum of digits of "<<x<<" is "<<sum<<endl;
    cout<<"Product of digits of "<<x<<" is "<<product<<endl;
    return (0);
}