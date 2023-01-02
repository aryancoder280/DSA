#include<iostream>
using namespace std;
class Node {
    
    public:
        int data;
        Node* left;
        Node* right;

        Node(int val) {
            data = val;
            left = right = NULL;
        }
};
Node* buildTree() {

        int d;
        cin>>d;
        if(d!=-1) {
            Node *n = new Node(d);
            n->left = buildTree();
            n->right = buildTree();
            return n;
        }
        else {
            return NULL;
        }
}
int main() {
  
  Node* root = buildTree();
}