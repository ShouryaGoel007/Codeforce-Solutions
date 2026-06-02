#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* left, *right;
    Node(int x) {
        data = x;
        left = right = NULL;
    }
};
static int idx=-1;
Node *buildTree(vector<int> v) {
    idx++;
    if (idx>=v.size()) return NULL;
    if (v[idx]==-1) return NULL;
    Node* root=new Node(v[idx]);
    root->left=buildTree(v);
    root->right=buildTree(v);
    return root;
}

void preorder(Node* root) {
    if (root==NULL) return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(Node* root) {
    if (root==NULL ) return ;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int levelorder(Node* root) {
    if (root==NULL) ;
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    int height=0;
    while (!q.empty()) {
        Node* temp=q.front();
        height++;
        q.pop();
        if (temp==NULL) {
            if (!q.empty()) {
                cout<<endl;
                q.push(NULL);
                continue;
            }
            else {
                break;
            }
        }
        auto it=temp->left;
        auto it2=temp->right;
        if (it!=NULL) q.push(it);
        if (it2!=NULL) q.push(it2);
        // cout<<temp->data<<" ";
    }
    return height;
}

int main(){
    vector<int> v{1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root=buildTree(v);
    // preorder(root);
    // cout<<endl;
    // inorder(root);
    // cout<<endl;
    levelorder(root);
}    