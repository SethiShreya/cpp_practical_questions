#include<bits/stdc++.h>
using namespace std;

string reverse(string str){
    string s;
    int l= str.size()-1;
    for (int i=0; i<str.size(); i++){
        s= s+ str[l];
        l--;
    }
    return s;
}

int main(){
    // string str = "abccba";   Predefined string
    // user's taken string
    string str;
    cout<<"Enter the string: ";
    cin>>str;
    int mid= (str.size())/2;
    string tail = reverse(str.substr(mid, str.size()));
    string head= str.substr(0, mid+1);
    if (head==tail)
        cout<<"String is palindrome";
    else{
        cout<<"String is not palindrome";
    }
    return (0);
}