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

void level_order_left_to_right(Node *root)
{
    if (!root)
        return;

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        cout << q.front()->val << " ";

        if (q.front()->left)
            q.push(q.front()->left);
        if (q.front()->right)
            q.push(q.front()->right);

        q.pop();
    }
}

void node_insert(Node *&root, int x)
{
    if(!root)
    {
        root = new Node (x);
        return;
    }

    if (root->val > x)
    {
        if (!root->left)
            root->left = new Node(x);
        else
            node_insert(root->left, x);
    }
    if (root->val < x)
    {
        if (!root->right)
            root->right = new Node(x);
        else
            node_insert(root->right, x);
    }
}

int main()
{
    Node *root = input_tree();
    // 20 10 30 -1 15 25 35 -1 -1 -1 -1 -1 -1

    level_order_left_to_right(root);

    int x;
    cin >> x;
    node_insert(root, x);

    level_order_left_to_right(root);

    return 0;
}