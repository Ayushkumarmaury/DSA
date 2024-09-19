
// table printing program


#include<iostream>
using namespace std;
int main(){
    int i , n;
    cout<<"enter the value of n : "<<endl;
    cin>>n;
    cout<<" table of  : "<< n <<endl;
    for (int i =n; i <=n*10; i+=n)
    {
        cout<<i<<endl;
    }
    
    return 0;
}