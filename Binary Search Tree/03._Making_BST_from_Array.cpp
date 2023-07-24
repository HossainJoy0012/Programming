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

void node_insert(Node *&root, int x)
{
    if (!root)
    {
        root = new Node(x);
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

Node *BST_from_array(int a[], int n, int l, int r)
{
    int mid = (l + r) / 2;
    if (l > r)
        return NULL;

    Node *root = new Node(a[mid]);

    Node *left = BST_from_array(a, n, l, mid - 1);
    root->left = left;

    Node *right = BST_from_array(a, n, mid + 1, r);
    root->right = right;

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

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    Node *root = BST_from_array(a, n, 0, n - 1);

    level_order_left_to_right(root);

    return 0;
}