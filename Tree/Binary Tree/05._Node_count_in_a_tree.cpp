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
    Node *root;
    queue<Node *> q;

    while (q.empty())
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            root = NULL;
        }
        else
        {
            root = new Node(val);
            q.push(root);
            break;
        }
    }

    while (!q.empty())
    {
        Node *x = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        if (l == -1)
            x->left = NULL;
        else
            x->left = new Node(l);

        if (r == -1)
            x->right = NULL;
        else
            x->right = new Node(r);

        if (x->left)
            q.push(x->left);
        if (x->right)
            q.push(x->right);
    }

    return root;
}

int count_node(Node *root)
{
    if(!root)
    return 0;

    int l=count_node(root->left);
    int r=count_node(root->right);

    return l+r+1;
}

int main()
{
    Node *root = input_tree();

    // 10 20 30 40 90 -1 50 -1 60 -1 100 70 80 -1 -1 -1 -1 -1 -1 -1 -1

    cout<<count_node(root);

    return 0;
}