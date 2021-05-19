#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};
struct Node *head = NULL;

struct Node *addElement(int data)
{
    struct Node *temp = new Node();
    temp->data = data;
    temp->next = NULL;
    return temp;
}

void InsertElement(int data, int n)
{
    data = data/10;
    struct Node *temp = addElement(data);
    if (n == 1)
    {
        temp->next = head;
        head = temp;
        return;
    }
    struct Node *prev, *cur = head;
    for (int i = 1; i < n - 1; i++)
    {
        cur = cur->next;
    }
    temp->next = cur->next;
    cur->next = temp;
}

void printElement()
{
    struct Node *temp = head;
    while (temp)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    InsertElement(10, 1);
    InsertElement(10, 1);
    InsertElement(10, 1);
    InsertElement(10, 1);

    while (1)
    {
        
        int ch;
        cout << "Enter your choice" << endl;
        cin >> ch;
        if (ch)
        {
            int data, pos;
            cout << "Enter the data to be inserted and position" << endl;
            cin >> data >> pos;
            InsertElement(data, pos);
            printElement();
        }
        else
            exit(0);
    }
    return 0;
}
