#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

int main()
{
    Node a(10);
    Node b(20);

    a.next = &b;

    cout << a.val << endl
         << b.val << endl
         << a.next << endl
         << b.next << endl
         << (*a.next).val << endl
         << a.next->val;

    return 0;
}