#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node* left;
    Node* right;
    Node(int v): val(v), left(nullptr), right(nullptr){}
};

Node* insert(Node* root, int value)
{
    if (!root) return new Node(value);
    if (value < root->val) root->left = insert(root->left, value);
    else root->right = insert(root->right, value);

    return root;
}

void inorder(Node* root)
{
    if (!root) return ;
    inorder(root->left);
    cout << root->val << " ";
}
