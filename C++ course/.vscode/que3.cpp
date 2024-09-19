
//    reverse table printing program;

#include<iostream>
#include<windows.h>
using namespace std;
int main(){
    int i , n;
    HANDLE H = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H,FOREGROUND_GREEN);
    cout<<"enter the value of n : "<<endl;
    cin>>n;
    cout<<" reverse table of  : "<< n <<endl;
    for (int i =n*10; i >=n ; i-=n)
    {
       cout<<i<<endl;
    }
    
    return 0;
}