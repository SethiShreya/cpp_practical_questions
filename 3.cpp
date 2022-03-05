#include<bits/stdc++.h>
using namespace std;


int main(){
    int n = 0;
    double sum = 0, temp = 0;
    cout<<"Enter the value: ";
    cin>>n;

    for (int i=1; i<=n; i++){
        temp = 1/(double)i;
        sum+=temp;
    }
    cout<<"Sum is "<<sum;
    
    return (0);
}