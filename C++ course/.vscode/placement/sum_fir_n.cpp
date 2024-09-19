#include<iostream>
using namespace std;
int first_n (int n){
    // int sum= n*(n+1)/2;
    int ans=0;
    for(int i=0; i<=n; i++)
        ans+=i;

    return ans;
}

int main(){ int num;
    cout<<"Enter the number : "<<endl;
    cin>>num;
    cout<<"The sum is : "<< first_n(num);
    return 0;
}