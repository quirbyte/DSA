#include <iostream>
using namespace std;
class Node{
    public:
    int data; 
    Node *next;
    Node(int data){                        //user-made constructor
        this->data = data;
        this->next = NULL;
    }

};
class Stack{
    Node* top;
    public:
    Stack(){
        top=NULL;
    }

    ~Stack() {
        while (top != NULL) {
            Node* temp = top;
            top = top->next;
            delete temp;
        }
    }

    void push(int element){
        Node* newNode=new Node(element);
        newNode->next=top;
        top=newNode;
    }
    void pop(){
        if(top==NULL){
            cout<<"Stack Underflow!!"<<endl;
        }
        else{
            Node* temp=top;
            top=top->next;
            delete temp;
        }
    }
    int peek(){
        if (top == NULL) {
            cout << "Stack is empty!" << endl;
            return -1; // Indicating an empty stack
        }
        return top->data;
    }
    bool isEmpty(){
        if(top==NULL)
            return true;
        return false;
    }

};

int main(){
    Stack st;
    st.push(34);
    st.push(28);
    st.push(78);
    st.pop();
    cout<<"The topmost element is: "<<st.peek()<<endl;
}