void preorder(struct Node * root ){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" -> ";
    preorder(root->left);
    preorder(root->right);
}
void recursivePostOrder(struct Node *root){
    // postOrder = node -> left -> right
    
    if(root == NULL){
        return;
    }
    stack<struct Node*> s;
    s.push(root);
    while(!s.empty()){
        // first pop the element then push the left and right elements;
        struct Node *temp = s.top();
        cout<< temp->data<<" -> ";
        s.pop();
        //we are popping the right element before the left element because we want to process the left element first

        if(temp->right)
            s.push(temp->right);
        if(temp->left)
            s.push(temp->left);
    }


