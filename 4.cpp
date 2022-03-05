#include<bits/stdc++.h>
using namespace std;


int main(){
    int n=0;
    cout<<"Enter the value: ";
    cin>>n;
    int odd_sum=0, even_sum=0;
    for (int i=1; i<=n; i++){
        if (i%2==0){
            even_sum+=i;
        }else{
            odd_sum+=i;
        }
    }
    cout<<"The sum is "<<(odd_sum - even_sum);
    return (0);
}