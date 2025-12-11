#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data; 
    Node *next;
    Node(int data){                        //user-made constructor
        this->data = data;
        this->next = NULL;
    }
    ~Node(){                               //user-made destructor
        int value=this->data;     
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"Memory is free for node with data "<<value<<endl;
    }
};
void InsertionAtHead(Node* &head,int data){
    Node* temp=new Node(data);
    temp->next=head;
    head=temp;
}
void InsertionAtTail(Node* &tail,int data){
    Node* temp=new Node(data);
    tail->next=temp;
    tail=temp;
}
void InsertAtPosition(Node* &head,Node* &tail,int position,int data){
    if(position==1){
        InsertionAtHead(head,data);
        return;
    }
    Node *temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    if(temp->next==NULL){
        InsertionAtTail(tail,data);
        return;
    }
    Node *n = new Node(data);
    n->next=temp->next;
    temp->next=n;
}
void deleteNode(int position,Node* &head){
    if(position==1){
        //deleting first node
        Node *temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        //deleting middle or last node
        Node *curr=head;
        Node *prev=NULL;
        int cnt=1;
        while(cnt<position){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}
void NodeTraversal(Node* &head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    Node *node1=new Node(5); //using dynamic allocation
    // cout<<node1-> data<<endl;
    // cout<<node1-> next<<endl;
    Node *head=node1;
    Node *tail=node1;
    InsertionAtTail(tail,10);
    InsertionAtTail(tail,12);
    InsertionAtTail(tail,13);
    InsertAtPosition(node1,tail,5,9);
    deleteNode(5,node1);
    NodeTraversal(node1);
}