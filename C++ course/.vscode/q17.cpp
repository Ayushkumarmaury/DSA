
// printing sum of every digits
#include<iostream>
using namespace std;
int main(){
    int n ,r,s=0; 
    cout<<"enter the number : "<<endl;
    cin>>n;
     while (n!=0)
    {
       r=n%10;
       s=s+r;
       n=n/10;
    }
    cout<<"the sum is : "<<s<<endl;
    
    return 0;
}