#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int binary_to_decimal(int n){
    int ans =0;
    int x=1;
    while(n>0){
        int y=n%10;
        ans += x*y;
        x *=2;
        n/=10;
    }
    return ans;
}
int main(){int n;
    cout<<"Enter the Binary number : "<<endl;
    cin>>n;
    cout<<"Decimal number is : "<<binary_to_decimal(n)<<endl;    
    return 0;
}
