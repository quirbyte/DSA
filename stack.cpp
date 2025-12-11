#include <iostream>
using namespace std;
class Stack{
    //properties
    public:
    int top;
    int *arr;
    int size;


    //behaviour
    Stack(int size){
        this->size=size;
        arr=new int[size];      //constructor
        top=-1;
    }

    void push(int element){
        if(size-top>1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"Stack Overflow!!!";
        }
    }

    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"Stack Underflow!!!";
        }
    }

    int peek(){
        if(top>=0 && top<size){
            return arr[top];
        }
        else{
            cout<<"Stack is empty"<<endl;
            return -1;
        }
    }

    bool isEmpty(){
        if(top==-1){
            return true;
        }
        return false;
    }

};
int main(){
    Stack st(5);
    st.push(34);
    st.push(28);
    st.push(78);
    st.pop();
    cout<<"The topmost element is: "<<st.peek()<<endl;
}