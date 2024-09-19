//default parameters in function;

#include<iostream>
using namespace std;
int sum(int a, int b, int c=4){
    return(a+b+c);
}
int main(){
    cout<<"sum of 2 ,5 and 3 is :"<<sum(2,3,5)<<endl;
    cout<<"sum of 2 and 6 is : "<<sum(2,6);
    return 0;
}