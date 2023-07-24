#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input_tree()
{
    int val;
    while (true)
    {
        cin >> val;

        if (val != -1)
            break;
    }

    Node *root = new Node(val);

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        int x, y;
        cin >> x >> y;

        if (x == -1)
            q.front()->left = NULL;
        else
        {
            Node *l = new Node(x);
            q.front()->left = l;
            q.push(l);
        }

        if (y == -1)
            q.front()->right = NULL;
        else
        {
            Node *r = new Node(y);
            q.front()->right = r;
            q.push(r);
        }

        q.pop();
    }

    return root;
}

bool node_search(Node *root, int x)
{
    if(!root)
    return false;

    if(root->val==x)
    return true;
    else if(root->val>x)
    return node_search(root->left,x);
    else if(root->val<x)
    return node_search(root->right,x);
}

int main()
{
    Node *root = input_tree();
    // 10 5 15 2 6 12 16 -1 3 -1 -1 -1 -1 -1 -1 -1 -1

    if(node_search(root,20))
    cout<<"Node Found";
    else
    cout<<"Node not Found";
    
    
    return 0;
}