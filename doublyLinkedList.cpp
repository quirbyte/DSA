#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int data)
    { // constructor
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
    ~Node()
    { // destructor
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free for node with data " << value << endl;
    }
};
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int getLength(Node *head)
{
    int length = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        length++;
        temp = temp->next;
    }
    return length;
}
void InsertionAtHead(int data, Node *&head)
{
    if (head == NULL)
    {
        Node *temp = new Node(data);
        head = temp;
    }
    else
    {
        Node *temp = new Node(data);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}
void InsertionAtTail(int data, Node *&tail)
{
    if (tail == NULL)
    {
        Node* temp=new Node(data);
        tail=temp;
    }
    else
    {
        Node *temp = new Node(data);
        temp->prev = tail;
        tail->next = temp;
        tail = temp;
    }
}
void InsertAtPosition(Node *&head, Node *&tail, int position, int data)
{
    if (position == 1)
    {
        InsertionAtHead(data, head);
        return;
    }
    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    if (temp->next == NULL)
    {
        InsertionAtTail(data, tail);
        return;
    }
    Node *n = new Node(data);
    temp->next->prev = n;
    n->next = temp->next;
    temp->next = n;
    n->prev = temp;
}
void deleteNode(int position, Node* & head) { 

    //deleting first or start node
    if(position == 1) {
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp ->next;
        temp -> next = NULL;
        delete temp;
    }
    else
    {
        //deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr -> next = NULL;

        delete curr;

    }
}
int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    InsertionAtHead(12, head);
    InsertionAtTail(5, tail);
    InsertAtPosition(head, tail, 3, 19);
    cout << "head: " << head->data << endl;
    cout << "tail: " << tail->data << endl;
    print(head);
}