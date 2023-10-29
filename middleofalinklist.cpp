// Middle Of Linked List
// constraints
// 1 <= 'N' <= 10^4
// 0 <= 'data' <= 10^3 

// Where 'N' is the length of the linked list.

// Time Limit: 1 sec


/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node *findMiddle(Node *head) {
   Node *fast = head;
   Node *slow =head;
   while(fast !=NULL&&fast->next != NULL){
       fast=fast->next->next;
       slow=slow->next;

   }
        return slow;
}

