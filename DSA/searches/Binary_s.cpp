#include<iostream>
using namespace std;

 int binary_search(int arr[],int n, int key){
    int s = 0;
    int e = n;
    
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid]==key){
            cout<<"key : "<<endl;
            return mid;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
        
 }


int main(){
    int k;
    int arr[5];
    cout<<"enter array element : "<<endl;
    for (int i = 0; i < 5; i++)
    {
       cin >> arr[i];
    }
    cout<<"enter the kay you want to search : "<<endl;
    cin>>k;
    cout<<binary_search(arr,5,k);
    

}