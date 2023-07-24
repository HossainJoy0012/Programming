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

void pre_order(Node *root)
{
    if (!root)
        return;

    cout << root->val << " ";
    pre_order(root->left);
    pre_order(root->right);
}

void in_order(Node *root)
{
    if (!root)
        return;

    in_order(root->left);
    cout << root->val << " ";
    in_order(root->right);
}

void post_order(Node *root)
{
    if (!root)
        return;

    post_order(root->left);
    post_order(root->right);
    cout << root->val << " ";
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

void level_order_right_to_left(Node *root)
{
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        cout << q.front()->val << " ";

        if (q.front()->right)
            q.push(q.front()->right);
        if (q.front()->left)
            q.push(q.front()->left);

        q.pop();
    }
}

int node_count_by_depth_traversal(Node *root)
{
    if (!root)
        return 0;

    int l = node_count_by_depth_traversal(root->left);
    int r = node_count_by_depth_traversal(root->right);

    return l + r + 1;
}

int node_count_by_level_traversal(Node *root)
{
    int cnt = 0;

    if (!root)
    {
        cout << cnt;
        return cnt;
    }

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        if (q.front()->left)
            q.push(q.front()->left);
        if (q.front()->right)
            q.push(q.front()->right);

        q.pop();
        cnt++;
    }

    return cnt;
}

int leaf_node_count(Node *root)
{
    if (!root)
        return 0;

    if (!root->left && !root->right)
        return 1;
    else
    {
        int l = leaf_node_count(root->left);
        int r = leaf_node_count(root->right);

        return l + r;
    }
}

int max_height(Node *root)
{
    if (!root)
        return 0;

    int l = max_height(root->left);
    int r = max_height(root->right);

    return max(l, r) + 1;
}

void leftmost_nodes(Node *root)
{
    if (!root)
        return;

    queue<pair<Node *, int>> q;

    q.push({root, 0});

    Node *node;
    int level;
    bool cnt[1000] = {false};

    while (!q.empty())
    {
        node = q.front().first;
        level = q.front().second;

        if (!cnt[level])
        {
            cout << node->val << " ";
            cnt[level] = true;
        }

        if (node->left)
            q.push({node->left, level + 1});
        if (node->right)
            q.push({node->right, level + 1});

        q.pop();
        level++;
    }
}

void rightmost_nodes(Node *root)
{
    if (!root)
        return;

    queue<pair<Node *, int>> q;

    q.push({root, 0});

    Node *node;
    int level;
    bool cnt[1000] = {false};

    while (!q.empty())
    {
        node = q.front().first;
        level = q.front().second;

        if (!cnt[level])
        {
            cout << node->val << " ";
            cnt[level] = true;
        }

        if (node->right)
            q.push({node->right, level + 1});
        if (node->left)
            q.push({node->left, level + 1});

        q.pop();
        level++;
    }
}

int diameter_of_the_tree(Node *root, int *&diameter)
{
    int l = max_height(root->left);
    int r = max_height(root->right);
    int d =l+r+1;
    *diameter=max(*diameter,d);
    return *diameter;
}

int main()
{
    Node *root = new Node(1);
    Node *a = new Node(2);
    Node *b = new Node(3);
    Node *c = new Node(4);
    Node *d = new Node(5);
    Node *e = new Node(6);
    Node *f = new Node(7);
    Node *g = new Node(8);
    Node *h = new Node(9);
    Node *i = new Node(10);
    Node *j = new Node(11);
    Node *k = new Node(12);
    Node *l = new Node(13);
    Node *m = new Node(14);
    Node *n = new Node(15);
    Node *o = new Node(16);

    root->left = a;
    root->right = b;

    a->left = c;
    c->left = f;

    b->left = d;
    b->right = e;

    d->left = g;
    g->left = j;
    j->left = m;

    e->left = h;
    e->right = i;

    h->left = k;
    k->left = n;
    n->left = o;

    i->right = l;

    // 1 2 3 4 -1 5 6 7 -1 8 -1 9 10 -1 -1 11 -1 12 -1 -1 13 14 -1 15 -1 -1 -1 -1 -1 16 -1 -1 -1
    // Node *root = input_tree();

    pre_order(root);

    cout << endl;

    in_order(root);

    cout << endl;

    post_order(root);

    cout << endl;

    level_order_left_to_right(root);

    cout << endl;

    level_order_right_to_left(root);

    cout << endl;

    cout << node_count_by_level_traversal(root);

    cout << endl;

    cout << node_count_by_depth_traversal(root);

    cout << endl;

    cout << leaf_node_count(root);

    cout << endl;

    cout << max_height(root);

    cout << endl;

    leftmost_nodes(root);

    cout << endl;

    rightmost_nodes(root);

    cout << endl;

    int dmtr=0;
    int *diameter = &dmtr ;
    cout << diameter_of_the_tree(root, diameter);

    return 0;
}