#include <iostream>
#include<vector>
using namespace std;
 
//  Focus on th elogic only logic only tested not whole code.
struct Node {
    int val;
    Node* left, *right;
    Node(int num) {
        val = num;
        left = right = NULL;
    }
};

void findPath(Node* root, int targetSum, vector<int>path, vector<vector<int> >&paths) {
    targetSum -= root->val;
    path.push_back(root->val);
    if(!targetSum) {
        paths.push_back(path);
        
        return;
    }
    else if(targetSum<0) {
        return;
    }
    else {
        if(root->left) {
            findPath(root->left,targetSum,path,paths);
        }
        if(root->right) {
            findPath(root->right,targetSum, path, paths);
        }
        return;
    }
}
vector<vector<int>> pathSum(Node* root, int targetSum){
    vector<int>path;
    vector<vector<int> >paths;
    findPath(root,targetSum,path,paths);
    return paths;
}
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