#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

// inserting at head/starting
void insertAtHead(Node *&head, int val)
{
    Node *new_node = new Node(val);
    if (head == NULL)
    {
        new_node->next = new_node;
        head = new_node;
        return;
    }
    Node *t = head;
    while (t->next != head)
    {
        t = t->next;
    }
    t->next = new_node;
    new_node->next = head;
};

// inserting at tail/ending
void insertAtTail(Node *&head, int val)
{
    if (head == NULL)
    {
        insertAtHead(head, val);
        return;
    }
    Node *t = head;
    Node *new_node = new Node(val);
    while (t->next != head)
    {
        t = t->next;
    }
    t->next = new_node;
    new_node->next = head;
};

//deleting at head
void deleteAtHead(Node *&head){
    Node *t = head;
    Node *todelete=head;
    while(t->next != head){
        t = t->next;
    }
    t->next=head->next;
    head=head->next;
    delete todelete;
};

// deleting element from the linklist;
void deleteLinkList(Node *&head, int pos)
{
    Node *t = head;
    int count = 1;
    if(pos==1){
        deleteAtHead(head);
        return;
    }
    while (count != pos - 1)
    {
        t = t->next;
        count++;
    };
    Node *toDelete = t->next;
    t->next = t->next->next;
    delete toDelete;
};

// displaying linklist
void display(Node *head)
{
    Node *t = head;
    do
    {
        cout << t->data << " ";
        t = t->next;
    } while (t != head);
    cout << endl;
    return;
};

int main()
{
    Node *head = NULL;
    insertAtHead(head, 0);
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    display(head);
    deleteLinkList(head, 6);
    display(head);
    return 0;
}