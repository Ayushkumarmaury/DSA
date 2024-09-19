#include <iostream>
#include<queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
       this->data = d;
       this->left =NULL;
       this->right =NULL;
    }
    
};


void inorder(Node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    inorder(root->left);
    cout << root-> data << " ";
    inorder(root->right);

}

void preorder(Node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    cout << root-> data << " ";
    preorder(root->left);
    preorder(root->right);

}

void postorder(Node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root-> data << " ";

}

//recursive way

// bool searchInBST(BinaryTreeNode<int> *root, int x) {
//    //base 
//    if(root==NULL){
//        return false;
//    };
//    if(root->data==x){
//        return true;
//    };

//    if(root->data>x){
//        //left part
//        return searchInBST(root->left, x);
//    }
//    else{
//        //right part
//        return searchInBST(root->right, x);
//    }
// };


//iterative way

// bool searchInBST(BinaryTreeNode<int> *root, int x){
//     BinaryTreeNode<int> *temp = root;

//     while(temp != NULL){
//         if(temp->data==x){
//             return true;
//         }
//         if(temp->data>x){
//             temp=temp->left;
//         }
//         else{
//             temp = temp->right;
//         }
//     }
//     return false;
// }

void levelOrderTraversal(Node* root) {
    queue<Node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if(temp == NULL) { 
            //purana level complete traverse ho chuka hai
            cout << endl;
            if(!q.empty()) { 
                //queue still has some child ndoes
                q.push(NULL);
            }  
        }
        else{
            cout << temp -> data << " ";
            if(temp ->left) {
                q.push(temp ->left);
            }

            if(temp ->right) {
                q.push(temp ->right);
            }
        }
    }

}

Node* minValue(Node *root){
    Node* temp = root;
    while(temp->left!=NULL){
        temp=temp->left;
    };
    return temp;
};

Node* maxValue(Node *root){
    Node* temp = root;
    while(temp->right!=NULL){
        temp=temp->right;
    };
    return temp;
};

Node* insertInBst(Node *root, int d){
        //base case
        if(root==NULL){
            root = new Node(d);
            return root;
        }
        if(d>root->data){
            //insert in  right part
            root->right = insertInBst(root->right,d);
        }else{
            //insert in left part
            root->left = insertInBst(root->left,d);
        }
        return root;
}

Node* deleteFromBST(Node* root, int val){
    //base case
    if(root==NULL){
        return root;
    }
    if(root->data==val){
        //0 child
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }

        //1 child
        //left child
        if(root->left != NULL && root->right == NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        }

        //right child
         if(root->left == NULL && root->right != NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        }

        //2 child
        if(root->left != NULL && root->right != NULL){
            int min =minValue(root->right)->data;
            root->data = min;
            root->right = deleteFromBST(root->right,min);
            return root;
        }

    }else if(root->data>val){
        root->left= deleteFromBST(root->left,val);
        return root;
    }else{
        root->right= deleteFromBST(root->right,val);
        return root;
    }
};


void takeInput(Node *&root){
    int data;
    cin >> data;
    while(data!=-1){
        root = insertInBst(root, data);
        cin >> data;
    };
};


int main()
{
   Node* root = NULL;
   cout<<"Enter data to create BST"<<endl;

   takeInput(root);

   cout<<"printing BST"<<endl;
   levelOrderTraversal(root);

   cout<<"printing Inorder"<<endl;
   inorder(root);

  cout<<endl;
   cout<<"printing Preorder "<<endl;
   preorder(root);

   cout<<endl;
   cout<<"printing Postorder"<<endl;
   postorder(root);

    cout<<endl;
   cout<<"min value : "<<minValue(root)->data<<endl;
   

   cout<<"max value : "<<maxValue(root)->data<<endl;
   

   cout<<"deletation : "<<endl;
   root = deleteFromBST(root,90);

    cout<<"after deletion : "<<endl;
    cout<<"printing BST"<<endl;
   levelOrderTraversal(root);

   cout<<"printing Inorder"<<endl;
   inorder(root);

  cout<<endl;
   cout<<"printing Preorder "<<endl;
   preorder(root);

   cout<<endl;
   cout<<"printing Postorder"<<endl;
   postorder(root);

    cout<<endl;
   cout<<"min value : "<<minValue(root)->data<<endl;
   

   cout<<"max value : "<<maxValue(root)->data<<endl;

    return 0;
}
