#include <iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int v;
    Node* l;
    Node* r;
    Node(int v): v(v), l(NULL), r(NULL){}
};

Node* insert(Node* root, int value)
{
    if (!root) return new Node(value);
    if (root->v > value) root->l = insert(root->l, value);
    else root->r = insert(root->r, value);
    return root;
}

void inorder(Node* root)
{
    if (!root) return ;
    inorder(root->l);
    cout << root->v << " ";
    inorder(root->r);
}

void preorder(Node* root)
{
    if (!root) return ;
    cout << root->v << " ";
    inorder(root->l);
    inorder(root->r);
}

bool find(Node* root, int target)
{
    if (!root) return false;
    if (root->v == target) return true;
    if (root->v > target) return find(root->l, target);
    return find(root->r, target);
}

int height(Node* root)
{
    if(!root) return 0;
    return 1 + max(height(root->l), height(root->r));
}

int main()
{
    Node* root = NULL;
    vector<int> v = {5, 2, 8, 1, 3};
    for(int i : v) root = insert(root, i);
    inorder(root);
}