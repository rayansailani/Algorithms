
void reverseRecursion(struct Node *ptr)
{
    if (ptr->next == NULL)
    {
        head = ptr;
        return;
    }
    reverseRecursion(ptr->next);
    struct Node * q = ptr->next;
    q->next = ptr;// instead of the above statements use: ptr->next->next = ptr;
    ptr->next = NULL;
    // 10 > 20 > 30 > 50(ptr) > 60(ptr->next)
    //  ptr->next->next = ptr; makes 
    // 10 > 20 > 30 > 50(ptr) < 60(ptr->next)
    //                 v(null)
}
