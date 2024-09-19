#include<iostream>
using namespace std;
int main(){
    int a , b, hcf , r;
    cout<<" enter two no. : "<<endl;
    cin>>a>>b;
    while (true)
    {
        hcf=b;
        r=a%b;
        a=b;
        b=r;
        if (b==0)
        {
            break;
        }
        
    }
    cout<<" Hcf is  : "<<hcf<<endl;
    
    return 0;
}