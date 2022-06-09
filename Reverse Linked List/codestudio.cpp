#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    if(head==nullptr || head->next==nullptr) return head;
    LinkedListNode<int>*newHead=reverseLinkedList(head->next);
    head->next->next=head;
    head->next=nullptr;
    return newHead;
}