#include<iostream>
using namespace std;
int main(){
    float arr[2][2];
    cout<<"Enter the array elements : "<<endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
          cin>>arr[i][j];
        }
        
    }

    cout<<"your 2d array : "<<endl;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
          cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}