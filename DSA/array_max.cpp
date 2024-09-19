#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[5];
    cout<<"Enter the array elements: "<<endl;
    for(int i=0;i<5;i++){
        cin >> arr[i];
    }
        int max_no=INT_MIN;
        int min_no=INT_MAX;

        for ( int i = 0; i < 5; i++)
        {
            max_no = max(max_no,arr[i]);
            min_no = min(min_no,arr[i]);
        }
        
        cout<<"max_no= "<<max_no<<endl<<"min_no= "<<min_no<<endl;
}