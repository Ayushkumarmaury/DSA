#include<bits/stdc++.h>
using namespace std;
string decimal_to_Hexadecimal(int n){
    int x=1;
    string ans="";
    while (x<=n)
    {
        x*=16;
    }
    x/=16;
    while (x>0){
        int lastDigit =n/x;
        n-=lastDigit*x;
        x/=16;
        
        if(lastDigit<=9){
            ans=ans+to_string(lastDigit);
        }

        else{
            char c= 'A'+lastDigit-10;
            ans.push_back(c);
        }
    }
    return ans;
    
}

int main(){int a;
    cout<<"Enter a decimal number : "<<endl;
    cin>>a;
    cout<<"Hexadecimal number is : "<<decimal_to_Hexadecimal(a)<<endl;
    return 0;
}