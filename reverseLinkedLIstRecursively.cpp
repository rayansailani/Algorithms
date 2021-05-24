
void reverseRecursion(struct Node *ptr)
{
    if (ptr->next == NULL)
    {
        head = ptr;
        return;
    }
    reverseRecursion(ptr->next);
    struct Node * q = ptr->next;
    q->next = ptr;
    ptr->next = NULL;
}
