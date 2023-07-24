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

void level_order_left_to_right(Node *root)
{
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *x = q.front();
        q.pop();
        cout << x->val << " ";

        if (x->left)
        {
            q.push(x->left);
        }
        if (x->right)
        {
            q.push(x->right);
        }
    }
}

void level_order_right_to_left(Node *root)
{
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *x = q.front();
        q.pop();
        cout << x->val << " ";

        if (x->right)
        {
            q.push(x->right);
        }
        if (x->left)
        {
            q.push(x->left);
        }
    }
}

int main()
{
    Node *root=input_tree();

    // 10 20 30 40 90 -1 50 -1 60 -1 100 70 80 -1 -1 -1 -1 -1 -1 -1 -1
    
    level_order_left_to_right(root);
    cout << endl;
    level_order_right_to_left(root);

    return 0;
}