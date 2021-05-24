#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};
struct Node *head = NULL;

void insert(int data)
{
    struct Node *temp = new Node();
    temp->data = data;
    temp->next = NULL;
    temp->prev = NULL;
    if (head == NULL)
    {
        head = temp;
        return;
    }
    head->prev = temp;
    temp->next = head;
    head = temp;
}

void print(struct Node *head)
{
    while (head)
    {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << endl;
}

void deleteNode(int pos)
{
    struct Node *temp = head;
    if (pos == 1)
    {
        head = temp->next;
        delete temp;
        return;
    }
    for (int i = 1; i < pos; i++)
    {
        temp = temp->next;
    }
    temp->prev->next = temp->next;
    delete temp;
    return;
}


void reverse()
{
    struct Node *prev = NULL;
    struct Node *temp = head;
    while (temp)
    {
        prev = temp->prev;

        temp->prev = temp->next;
        temp->next = prev;
        temp = temp->prev;
    }
    if (prev != NULL)
    {
        head = prev->prev;
    }
}
int main()
{

    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    insert(60);
    print(head);
    // deleteNode(2);
    reverse();
    print(head);

    return 0;
}
