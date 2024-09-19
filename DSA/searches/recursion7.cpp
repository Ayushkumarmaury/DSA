//Bubble short
#include<iostream>
using namespace std;
void bubble(int *arr , int i,int size){
        if(size==0 || size==1){
            return;
        }

        if(arr[i]<arr[i+1]){
          swap(arr[i],arr[i+1]);
        }

        return bubble(arr ,i+1,size-1);

}
 

 int main(){

    int arr[5]={4,5,78,1,45};

    bubble(arr,0,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }

    return 0;
 }