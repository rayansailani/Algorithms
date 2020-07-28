#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

struct NODE{
	int data;
	struct NODE *link;
};
typedef struct NODE * node;
node first = NULL;

void insert_item(){
	node temp;
	int item;
	cout<<"Enter the  item to be inserted"<<endl;
	cin>>item;
	temp = (node)malloc(sizeof(struct NODE));
	cout<<"memory allocated"<<endl;
	temp->data = item;
	temp->link = first;
	first = temp;
	cout<<first->data<<" was inserted!"<<endl;
}
void display_item(){
	node temp;
	temp = first;
	while(temp!= NULL){
		cout<<temp->data<<" ";
		temp=temp->link;
	}
	cout<<endl;
}
void delete_item(){
	int item;
	cout<<"Enter the item  to be deleted."<<endl;
	cin>>item;
	node cur, prev;
	prev = NULL;
	cur = first;
	while(cur!=NULL && cur->data != item){
		prev = cur;
		cur = cur->link;
	}
	if(cur==NULL){
		cout<<"item not to be found"<<endl;
		return ;
	}
		prev->link = cur->link;
		free(cur);
	
	cout<<"Item was deleted"<<endl;
}
		

		

int main(){
	int choice;
	
	while(1){
		cout<<"Enter your choice from 1.insert\n2.delete\n3.display\n4.exit."<<endl;
		cin>>choice;
		switch(choice){
			case 1:
			insert_item();
					break;
			case 2:delete_item();
				break;
			case 3:display_item();
					break;
			case 4:exit(0);
			default:break;
		}
	}
}