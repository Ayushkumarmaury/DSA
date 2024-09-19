// doubly linklist
#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;
    Node(int val)
    {
        data = val;
        prev = NULL;
        next = NULL;
    };
};

// insert at head//starting
void insertAtHead(Node *&head, int val)
{
    Node *new_node = new Node(val);
    new_node->next = head;
    if (head != NULL)
    {
        head->prev = new_node;
    }
    head = new_node;
}

// inserting new node at tail/end
void insertAtTail(Node *&head, int val)
{
    Node *new_node = new Node(val);
    Node *temp = head;
    if (head == NULL)
    {
        insertAtHead(head, val);
        return;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    new_node->prev = temp;
    temp->next = new_node;
}

//deleting from head
void deleteAtHead(Node *&head){
    Node *toDelete = head;
    head=head->next;
    head->prev = NULL;
    delete toDelete;
}

//deleting value
void delete_value(Node *&head, int val){
    Node* t=head;
  
    if(t->data == val){
        deleteAtHead(head);
        return;
    }
    while(t!=NULL && t->data != val){
        t=t->next;
    }
    t->prev->next=t->next;
    if(t->next!=NULL){
        t->next->prev=t->prev;
    }
    delete t;
    
}

// display
void display(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << "-->";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    Node *head = NULL;
    insertAtHead(head, 0);
    insertAtHead(head, 10);
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    cout<<"Linklist: "<<endl;
    display(head);
    delete_value(head,3);
    cout<<"*****************************"<<endl;
    cout<<'\n';
    cout<<"*****************************"<<endl;
    cout<<"Linklist after deletation: "<<endl;
    display(head);

    return 0;
}
