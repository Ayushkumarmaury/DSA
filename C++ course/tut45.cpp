#include<iostream>
using namespace std;
float mul(int a, int b);
int main(){float x, y;
    cout<<" enter the x and y :"<<endl;
    cin>>x>>y;
    cout<<"mul of x and y is :"<<endl;
    cout<<mul(x , y);
    return 0;
}
float mul(int a , int b){
      return(a*b);}