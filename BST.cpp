#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};
Node* insertIntoBST(Node* root,int data){
    if(root==NULL){
        root=new Node(data);
        return root;
    }
    if(data>root->data){
        root->right=insertIntoBST(root->right,data);
    }
    else{
        root->left=insertIntoBST(root->left,data);
    }
    return root;
}
Node* minBST(Node* root){
    if(root==NULL){
        return root;
    }
    Node* temp=root;
    while(temp->left!=NULL){
        temp=temp->left;
    }
    return temp;
}
Node* maxBST(Node* root){
    if(root==NULL){
        return root;
    }
    Node* temp=root;
    while(temp->right!=NULL){
        temp=temp->right;
    }
    return temp;
}
Node* deleteBSTNode(Node* root,int x){
    if(root==NULL){
        return root;
    }
    if(root->data==x){
        //0 child
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }
        //1 child
        //left child only
        if(root->left!=NULL && root->right==NULL){
            Node* temp=root->left;
            delete root;
            return temp;
        }
        //right child only
        if(root->left==NULL && root->right!=NULL){
            Node* temp=root->right;
            delete root;
            return temp;
        }
        //2 children
        if(root->left!=NULL && root->right!=NULL){
            Node* mini=minBST(root->right);
            root->data=mini->data;
            root->right=deleteBSTNode(root->right,mini->data);
            return root;
        }
    }
    else if(root->data>x){
        root->left=deleteBSTNode(root->left,x);
    }
    else{
        root->right=deleteBSTNode(root->right,x);
    }
}
int main(){
    Node* root=NULL;
    root=insertIntoBST(root,5);
    root=insertIntoBST(root,3);
    root=insertIntoBST(root,6);
    root=insertIntoBST(root,1);
    root=insertIntoBST(root,4);
    root=insertIntoBST(root,7);
    root=insertIntoBST(root,2);
    root=insertIntoBST(root,8);
    root=insertIntoBST(root,0);
    root=insertIntoBST(root,9);
    root=insertIntoBST(root,10);
}