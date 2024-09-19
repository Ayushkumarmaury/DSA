//linear search
#include <bits/stdc++.h>
using namespace std;

bool search(int arr[],int size,int key){
        for(int i=0;i<size; i++){
                if(arr[i]==key){
                        cout<<"index is "<<i<<endl;
                        return 1;
                }
        }
        return 0;
}

int main()
{ 
        int arr[] = {10,34,67,58,98,76,45};
        cout<<"enter the number you want to search : ";
        int key;
        cin >> key;
        bool found = search(arr,10,key);
        if (found){
                cout<<"key is present."<<endl;
        }
        else{
                cout<<"key is not present."<<endl;
        }
        return 0;
}
