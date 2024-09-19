#include<iostream>
using namespace std;
 
int main(){

    int arr[3][3];
    cout<<"enter array element :"<<endl;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin >> arr[i][j];
        }
        cout<<endl;
    }

     cout<<"your array: "<< endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }

    
    cout<<"sum of row are :"<<endl;
    
    for(int i=0; i<3; i++){
        int sum=0;
        for(int j=0; j<3; j++){
            sum += arr[i][j];
        }
        cout<<sum<<endl;
    }

    cout<<"sum of col are :"<<endl;
    
    for(int j=0; j<3; j++){
        int sum=0;
        for(int i=0; i<3; i++){
            sum += arr[i][j];
        }
        cout<<sum<<endl;
    }

    cout<<"largest sum of row is :"<<endl;
    for(int i=0; i<3; i++){
        int sum=0;
        for(int j=0; j<3; j++){
            sum += arr[i][j];
        }
        cout<<sum<<endl;
    }


    return 0;
}