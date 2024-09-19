#include<iostream>
using namespace std;
int main()
{
    int i, j;
    for (i = 0; i <=9 ; i++)
    {
        for (j = 0; j <=5; j++){
            if (j<=6-i || j<=i-4){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
}