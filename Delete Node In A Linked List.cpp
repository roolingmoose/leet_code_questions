/* you are given reference to node which you would have to delete and the reference of head is not given */





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

void deleteNode(LinkedListNode<int> * node) {

    if(node==NULL) return ;
   swap(node->data,node->next->data);

    node->next = node->next->next;
}
