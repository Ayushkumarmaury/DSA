//queue implimentation using arrays
#include <iostream>
using namespace std;

class Queue
{
    int *arr;
    int front;
    int rear;
    int size;

public:
    Queue()
    {
        size = 10001;
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    bool Empty()
    {
        if (front == rear)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void push(int data)
    {
        if (rear == size)
        {
            cout << "Queue is full!" << endl;
        }
        else
        {
            arr[rear] = data;
            rear++;
        }
    }

    void pop()
    {
        if (front == rear)
        {
            cout << "Queue is empty!" << endl;
        }
        else
        {
            arr[front] = -1;
            front++;
            if (front == rear)
            {
                front == 0;
                rear == 0;
            }
        }
    }

    int Front()
    {
        if (front == rear)
        {
            cout << "Queue is empty!" << endl;
        }
        else
        {
            return arr[front];
        }
    }
};

int main()
{
    Queue q;
    q.push(2);
    q.push(5),
    q.push(10);
    cout<<q.Empty()<<endl;
    q.pop();
    q.pop();
    q.pop();
    cout<<q.Empty()<<endl;
    cout<<q.Front()<<endl;


    return 0;
}