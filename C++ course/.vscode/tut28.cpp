#include<iostream>
using namespace std;
int main(){int n;
cout<<"enter the value of n:"<<endl;
cin>>n;
    for(int i=1;i<=n;i++){
          for (int k = n-i ; k>0; k--)
          cout<<" ";
  for ( int j = 1; j <= i; j++)
  {
    cout<<i;
  }
  cout<<endl;
    }
    return 0;
}