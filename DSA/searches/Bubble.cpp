#include<iostream>
using namespace std;

int main(){

    int a[6];
    cout<<"Enter the arrray element : "<<endl;
    for(int i = 0; i < 6; i++){
        cin >> a[i];
    }

  int c=1;
  while (c<6)
  {
    for (int i = 0; i < 6-c; i++)
    {
       if (a[i]>a[i+1]){
        swap(a[i],a[i+1]);
       }
    }
    c++;
  }
  cout<<"Sorted array : "<<endl;
  for(int i = 0; i < 6; i++){
    cout<<a[i]<<"\t";
  }
  
}