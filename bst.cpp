#include<iostream>
#include<stdlib.h>
using namespace std;

struct NODE{
	int data;
	struct NODE* left;
	struct NODE* right;
};
typedef struct NODE * node;
node root = NULL;

void insert(){
	int item;
	cout<<"Enter the item to be inserted"<<endl;
	cin>>item;
	node temp = (node)malloc(sizeof(struct NODE));
	temp->data = item;
	temp->left = temp->right = NULL;
	if(root==NULL){
		root = temp;
		cout<<root->data<<" is inserted as root"<<endl;
	}
	else{
	node cur,par;
	cur = root;
	par = NULL;
	while(cur!=NULL){
		par=cur;
		if(cur->data == item){
			cout<<"no duplicate items are allowed"<<endl;
			return;
		}
		cur = ((cur->data)>item)?cur->left:cur->right;
	}	
	if(par->data > item){
		par->left = temp;
	}
	else{
		par->right = temp;
	}
	}
}

void display(node root)
{
    node temp;
    temp = root;
    if (root == NULL)
    {
        return;
    }

    display(temp->left);
    cout << temp->data << "->";
    display(temp->right);
}
int main(){
	int item = 0, ch;
    while (1)
    {
        cout << endl;
        cout << "1.insert\n2.display\n3.delete\n4.exit" << endl
             << "enter your choice:" << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            
            insert();
            break;
        case 2:
            display(root);
            break;
        //case 3:
        //    delete_node();
        //    break;
        case 4:
            exit(0);
        default:
            cout << "choose wisely" << endl;
        }
    }
}