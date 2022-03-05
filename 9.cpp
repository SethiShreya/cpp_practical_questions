#include <iostream>
using namespace std;

int main() {
int r;
cout<<"Enter the rows: ";
cin>>r;
  for (int i=1; i<=r; i++){
  	for (int j=0; j<(2*i-1); j++){
    	cout<<'*';
    }
    cout<<endl;
  }
  return 0;
}
