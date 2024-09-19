
// swapping value without using third variable


#include<iostream>
using namespace std;
int main(){
    int a, b;
    cout<<"before swapping : "<< endl;;
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"after swapping : "<<a<<endl<<b;
    return 0;
}