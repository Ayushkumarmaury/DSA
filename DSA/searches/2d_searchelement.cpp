#include <iostream>
using namespace std;

int main(){
    int arr[3][3];

    cout<<"enter array element : "<< endl;
    
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin >> arr[i][j];
        }
        cout<<endl;
    }

    cout<<"enter element you want to search : "<< endl;
    int n;
    cin>>n;


    cout<<"your array: "<< endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }

bool f = false;
    int r=0, c=2;
    while(r<3 && c>=0){
        if(arr[r][c]==n){
            f=true;
        }
        arr[r][c]>n ? c--: r++;
    }


    // for(int i=0; i<3; i++){
    //     for(int j=0; j<3; j++){
    //         if(arr[i][j]==n){
    //             f=true;
    //         }
    //     }
    // }


if(f){
    cout<<"Element found .";
     
}
else
    cout<<"Element not found .";







    return 0;
}

