#include<iostream>
using namespace std;
int main(){
    int n , s;
    cout<<"enter the value of n "<<endl;
    cin>>n;
     s=0;
    for (int i = 0; i <= n; i++)
    {
      s+=i  ;
      
    }
     cout<<"sum is : "<<s;
    
    
    return 0;
}