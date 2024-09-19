#include<bits/stdc++.h>
using namespace std;
int decimal_to_binary(int n){
    int x=1;
    int ans=0;
    while (x<=n)
    {
        x*=2;
    }
    x/=2;
    while (x>0){
        int lastDigit =n/x;
        n-=lastDigit*x;
        x/=2;
        ans=ans*10+lastDigit;
    }
    return ans;
    
}

int main(){int a;
    cout<<"Enter a decimal number : "<<endl;
    cin>>a;
    cout<<"Binary number is : "<<decimal_to_binary(a)<<endl;
    return 0;
}