#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node * left;
    struct Node * right;
    Node(int info){
        data = info;
        left = NULL;
        right = NULL;
    }
};

struct Node * insert(int data, struct Node * root){
    struct Node * temp = new Node(data);
    if(root == NULL){
        return temp;
    }
    string order;
    cout<<"Enter the order in which you want to insert"<<endl;
    cin>>order;
    struct Node* cur = root;
    struct Node* par = NULL;
    for(int i = 0;i<order.length();i++){
        // make the current element as the parent
        par = cur;
        if(cur  && order[i] == 'l'){
            cur = cur->left;
        }
        else if(cur && order[i] == 'r')
            cur = cur->right;
        else{
            cout<<"invalid path selected"<<endl;
            delete temp;
            return root;
        }
    }
    if(order[order.length() - 1] == 'l'){
        par->left = temp;
    }
    else {
        par->right = temp;
    }
    return root;
}

void inorder(struct Node * root ){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" -> ";
    inorder(root->right);
}
int main()
{
    struct Node* root = NULL;
    root = insert(10, root);
    inorder(root);
    root = insert(20, root);
    // root = insert(10, root);
    inorder(root);
    return 0;
}
