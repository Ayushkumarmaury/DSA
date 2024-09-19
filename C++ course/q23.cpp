#include<iostream>
using namespace std;
int main(){
    int a , b , lcm , r;
    cout<<" enter two no. : "<<endl;
    cin>>a>>b;
    while (true)
    {   
        lcm=a;
        r=a%b;
        if (r==0)
        {
            break;
        }
        a=a*2;
        

    }
    cout<<" Lcm is : "<<lcm<<endl;
    
    return 0;
}