
  // printing fibonacci series

#include<iostream>
using namespace std;
int main(){
    int n , n1 , n2 , n3 , i;
    cout<<"enter the no. upto which you want to itearte : "<<endl;
    cin>>n;
    cout<<"n1 : "<<endl;
    cin>>n1;
    cout<<"n2 : "<<endl;
    cin>>n2;
    
    for (int i = 1; i <= n; i++)
    {
        n3=n1+n2;
        n1=n2;
        n2=n3;
        cout<<n3<<endl;
    }
    
    return 0;
}