#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node{
    int value;
    Node* left;
    Node* right;
    Node(int v) : value(v), left(NULL), right(NULL){}
};

Node* insert(Node* root, int v)
{
    if (!root) return new Node(v);

    if (root->value > v) root->left = insert(root->left, v);
    else root->right = insert(root->right, v);

    return root;
}

void inorder(Node* root)
{
    if (!root) return ;

    inorder(root->left);
    cout << root->value << " ";
    inorder(root->right);
}

int main()
{
    Node* root = NULL;
    vector<int> v = {5, 3, 8, 1, 4, 7, 10};

    for(int i : v) root = insert(root, i);

    inorder(root);
    cout << endl;
}