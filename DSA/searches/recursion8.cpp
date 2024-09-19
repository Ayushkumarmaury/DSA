//Selection short

#include<iostream>
using namespace std;
void selection(int *arr, int size , int i){
            if(i>size){
                return;
            }

            if(arr[i]<arr[i+1]){
                swap(arr[i], arr[i+1]);
            }
            return selection(arr, size, i+1);
}


int main(){
    int arr[5]={23,1,56};

    selection(arr,0,3);
    for(int i=0; i<3;i++){
        cout<<arr[i]<<endl;
    }


    return 0;
}