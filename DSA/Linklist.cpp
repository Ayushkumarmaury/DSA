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
    };
};

void insertAtHead(Node *&head, int val)
{
    Node *new_node = new Node(val);
    new_node->next = head;
    head = new_node;
};

void insertAtTail(Node *&head, int val)
{
    Node *new_node = new Node(val);
    if (head == NULL)
    {
        head = new_node;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
};

// searching
bool searchElement(Node *head, int key)
{
    Node *temp = head;
    while (temp != NULL)
    {

        if (temp->data == key)
        {
            cout << key << " is present " << endl;
            return 1;
        }

        temp = temp->next;
    };
    cout << key << " is not present" << endl;
    return false;
}

void deleteAtHead(Node *&head)
{
    Node *t = head;
    head = head->next;
    delete t;
}

void deleteKey(Node *&head, int key)
{

    Node *temp = head;
    if (head->data == key)
    {
        deleteAtHead(head);
        cout << key << " DEleted" << endl;
        return;
    }
    else if (head== NULL)
    {
        return;
    }
    else if (head->next == NULL)
    {
        deleteAtHead(head);
        cout << key << " DEleted" << endl;
        return;
    }
    else
    {

        while (temp->next->data != key)
        {
            temp = temp->next;
        }

        Node *toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
        cout << key << " DEleted" << endl;
    }
}

//reverse a link list
Node *reverse(Node *&head){
    Node *prev = NULL;
    Node *curre=head;
    Node *nextptr;
    while(curre!=NULL){
        nextptr=curre->next;
        curre->next=prev;
        prev=curre;
        curre=nextptr;
    }
    return prev;

}

//reverse linklist Recursive Way
Node* reverse_linklist(Node* &head){
    if(head==NULL || head->next==NULL){
        return head;
    }

    Node *newHead= reverse_linklist(head->next);
    head->next->next=head;
     head->next=NULL;
    return newHead;
}

//reverse k node of linklist
Node *reverseKnode(Node *&head, int k){
    Node *prev= NULL;
    Node *curre=head;
    Node *nextptr;
    int count=0;
    while(curre!=NULL && count<k ){
        nextptr=curre->next;
        curre->next=prev;
        prev=curre;
        curre=nextptr;
        count++;

    }

    if ( nextptr != NULL ){
        head->next=  reverseKnode(nextptr,k);
    }
    return prev;

}

//lenth of linklist
int lenght_linklist(Node *head){
    Node *t= head;
    int count=0;
    while( t != NULL){
        count++;
        t = t->next;
    }
    return count;
}

//Append K nodes in the linklist

Node* appendKnode(Node *&head, int k){
    int count = 1;
    Node *newHead;
    Node *newTail;
    Node *Tail=head;
    int l=lenght_linklist(head);
    k=k%l;
    while(Tail->next!=NULL){
        if(count==l-k){
            newTail=Tail;
        }
        if(count==l-k+1){
            newHead=Tail;
        }
        Tail=Tail->next;
        count++;
    };
    
    newTail->next=NULL;
    Tail->next=head;

    return newHead;

}


void display(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "Null" << endl;
}

int main()
{
    Node *head = NULL;
    // insertAtHead(head, 2);
    // insertAtHead(head, 4);
    // insertAtHead(head, 6);
    // insertAtTail(head, 7);
    insertAtTail(head, 1);
    insertAtTail(head, 2);
     insertAtTail(head, 3);
    insertAtTail(head, 4);
     insertAtTail(head, 5);
    insertAtTail(head, 6);
    cout << "Linklist" << endl;
    display(head);
    cout<<'\n';
    // searchElement(head, 9);
    // deleteKey(head, 9);
    // cout<<'\n';
    // cout << "After deletion" << endl;
    // display(head);
    // cout<<'\n';
    // cout<<"Reverse Linklist"<< endl;
    // Node* newHead= reverse(head);
    // display(newHead);
    // cout<<'\n';
    // cout<<"Reverse Linklist Recursive Way"<< endl;
    // Node* newHead1= reverse_linklist(head);
    // display(newHead1);

    // cout<<"Reverse k node of Linklist"<< endl;
    // int k=2;
    // Node* newHead1= reverseKnode(head,k);
    // display(newHead1);

    Node* newHead2= appendKnode(head,3);
    display(newHead2);

    return 0;
}