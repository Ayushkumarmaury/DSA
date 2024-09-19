#include <iostream>
using namespace std;

class stack
{
    int *arr;
    int top;
    int n;

public:
    stack(int n)
    {
        arr = new int[n];
        top = -1;
    };
    
    void push(int x){
        if(top == n-1){cout<<"stack overflow"<<endl;
        return;}
        top++; arr[top] = x;
    }
    void pop(){
        if(top==-1){
        cout<<"stack is Empty."<<endl;
        return;
        }
        top--;
    }
    int peak(){
        if(top==-1){cout<<"stack is Empty"<<endl;
        return -1;}
        return arr[top];
    }
    bool isEmpty(){
        return top==-1;
    }

};


main()
{
   stack s(5);
   s.push(1);
   s.push(3);
   s.push(2);

   cout<<s.peak()<<endl;
   cout<<s.isEmpty()<<endl;
   s.pop();
   s.pop();
   s.pop();
   cout<<s.peak()<<endl;
   cout<<s.isEmpty()<<endl;
   s.pop();

    return 0;
}