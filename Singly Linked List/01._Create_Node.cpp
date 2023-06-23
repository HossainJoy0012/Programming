#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
};

int main()
{
    Node a, b;

    a.val = 10;
    b.val = 20;

    a.next = &b;
    b.next = NULL;

    cout << a.val << endl
         << b.val << endl
         << a.next << endl
         << b.next << endl
         << (*a.next).val << endl
         << a.next->val;

    return 0;
}