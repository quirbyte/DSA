#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
node *buildTree(node *root)
{
    cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }
    root = new node(data);
    cout << "Enter data for left part of tree: " << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for right part of tree: " << endl;
    root->right = buildTree(root->right);
    return root;
}
void levelOrderTraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node *val = q.front();
        q.pop();
        if (val == NULL)      //separator
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << val->data << " ";
            if (val->left)
            {
                q.push(val->left);
            }
            if (val->right)
            {
                q.push(val->right);
            }
        }
    }
}
void inOrder(node* root){
    if(root==NULL){
        return; //base case
    }
    //LNR
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
void preOrder(node* root){
    if(root==NULL){
        return; //base case
    }
    //NLR
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
void postOrder(node* root){
    if(root==NULL){
        return; //base case
    }
    //LRN
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}
void MorrisInOrder(node* root){
    node* curr=root;
    while(curr!=NULL){
        if(curr->left==NULL){
            //if no left child, visit this and go right
            cout<<curr->data<<" ";
            curr=curr->right;
        }
        else{
            node* predecessor=curr->left;
            //find inorder predecessor of curr
            while(predecessor->right!=NULL && predecessor->right!=curr){
                predecessor=predecessor->right;
            }
            //make curr right child of its inorder predecessor
            if(predecessor->right==NULL){
                predecessor->right=curr;
                curr=curr->left;
            }
            else{
                //revert changes in tree by deleting links created
                predecessor->right=NULL;
                cout<<curr->data<<" ";
                curr=curr->right;
            }
        }
    }
}
void buildFromLevelOrder(node* &root){
    queue<node*> q;
    cout<<"Enter data for root: ";
    int data;
    cin>>data;
    root=new node(data);
    q.push(root);
    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        cout<<"Enter left node for "<<temp->data<<": ";
        int leftData;
        cin>>leftData;
        if(leftData!=-1){
            temp->left=new node(leftData);
            q.push(temp->left);
        }
        cout<<"Enter right node for "<<temp->data<<": ";
        int rightData;
        cin>>rightData;
        if(rightData!=-1){
            temp->right=new node(rightData);
            q.push(temp->right);
        }
    }
}
int main()
{
    node *root = NULL;
    buildFromLevelOrder(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    levelOrderTraversal(root);
    // cout<<endl;
    inOrder(root);
    cout<<endl;
    MorrisInOrder(root);
    cout<<endl;
    // preOrder(root);
    // cout<<endl;
    // postOrder(root);
    // return 0;
}