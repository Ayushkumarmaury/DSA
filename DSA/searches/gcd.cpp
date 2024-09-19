#include<iostream>
using namespace std;
 void gcd(int x, int y){

    while (y!=0)
    {
       int rem = x%y;
       x=y;
       y=rem;
    }

    cout<<x;
    // return x;
    
 }




int main(){
    int n1, n2;
    cout<<"enter numbers :"<<endl;
    cin>>n1;
    cin>>n2;
    cout<<"gcd is : ";
    gcd(n1,n2);

    return 0;
}