#include<bits/stdc++.h>
#include <iostream>
#include <queue>
using namespace std;

int main()
{

    // max heap
    // priority_queue<int>heap_max;
    // heap_max.push(3);
    // heap_max.push(10);
    // heap_max.push(1);
    // heap_max.push(45);
    // cout<<"top element : "<<heap_max.top()<<endl;
    // cout<<"size of queue : "<<heap_max.size()<<endl;
    // heap_max.pop();
    // cout<<"top element : "<<heap_max.top()<<endl;
    // cout<<"size of queue : "<<heap_max.size()<<endl;
    // heap_max.pop();
    // cout<<"top element : "<<heap_max.top()<<endl;
    // cout<<"size of queue : "<<heap_max.size()<<endl;

    //min heap
    priority_queue<int, vector<int>, greater<int>>heap_min;
    heap_min.push(3);
    heap_min.push(10);
    heap_min.push(1);
    heap_min.push(45);
    cout<<"top element : "<<heap_min.top()<<endl;
    cout<<"size of queue : "<<heap_min.size()<<endl;
    heap_min.pop();
    cout<<"top element : "<<heap_min.top()<<endl;
    cout<<"size of queue : "<<heap_min.size()<<endl;
    heap_min.pop();
    cout<<"top element : "<<heap_min.top()<<endl;
    cout<<"size of queue : "<<heap_min.size()<<endl;


    return 0;
}