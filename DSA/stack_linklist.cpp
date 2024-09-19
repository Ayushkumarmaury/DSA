#include<iostream>
using namespace std;

struct Node{
    int val ; Node *next;
};

class myStack{
    Node *head; int stackSize;
    public:
    myStack(){
        head=NULL; stackSize=0;
    }

    void push(int g){
        Node *temp=new Node();
        temp->val=g;
        temp->next=head;
        head=temp;
        stackSize++;
    }

    void pop(){
        if(head==NULL){
            cout<<"Empty stack"<<endl;
            return;
        }
        Node *temp=head;
        head=temp->next;
        temp->next=NULL;
        delete temp;
        stackSize--;
    }

    int peak(){
        if(head==NULL){
            cout<<"Empty stack"<<endl;
            return -1;
        }
        return head->val;
    }

    int isEmpty(){
        if(head==NULL){
            cout<<"Empty stack"<<endl;
            return 1;
        }
        return 0;
    }

    void size(){
        cout<<"Size of stack : "<<stackSize<<endl;
    }
};



int main(){
    myStack s1;
    s1.push(1);
    s1.push(9);
    s1.pop();
    s1.pop();
    cout<<s1.peak()<<endl;
    cout<<s1.isEmpty()<<endl;
    s1.size();
    return 0;

}