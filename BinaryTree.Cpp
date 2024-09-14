//date : 2/sep/2024
#include<iostream>
using namespace std;
class Node{
public:
Node(){
    int data;
    Node* left=NULL;
    Node* right=NULL;
}
}
void BuildTree(Node * root){
    int val;
    cin>>val;
    if(val==-1){
        return NULL;
    }
    root->data=val;
    BuildTree(root->left);
    BuildTree(root->right);
}


int main(){
    Node *root=new Node();
    BuildTree(root);
    return 0;
}