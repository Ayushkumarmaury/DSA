#include <bits/stdc++.h>
using namespace std;

int reverse_arr(int a[]){
    int s = 0; 
    int e = 5;
    while (s < e)
    {
        swap(a[s], a[e]);
        s++;
        e--;

    }
}


int main()
{


    int arr[6];
    cout << "enter array elements : " << endl;
    for (int i = 0; i < 6; i++)
    {
        cin >> arr[i];
    }

    cout << "your array elements are : " << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << "\t";
    }

    cout<< endl;
    
    reverse_arr(arr);

    cout<<"array after swap: "<<endl;
    for(int i=0; i<6; i++){
        cout<<arr[i]<<"\t";
    }
    
}