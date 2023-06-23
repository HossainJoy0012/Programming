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
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *tail = new Node(40);

    head->next = a; // (*head).next = a;
    a->next = b;    // (*a).next = b;
    b->next = tail; // (*b).next = tail;

    cout << head << endl
         << head->val << endl
         << (*head).val << endl
         << head->next << endl
         << (*head).next << endl
         << head->next->val << endl
         << (*(*head).next).val << endl
         << endl
         << a << endl
         << a->val << endl
         << (*a).val << endl
         << a->next << endl
         << (*a).next << endl
         << a->next->val << endl
         << (*(*a).next).val << endl
         << endl
         << b << endl
         << b->val << endl
         << (*b).val << endl
         << b->next << endl
         << (*b).next << endl
         << b->next->val << endl
         << (*(*b).next).val << endl
         << endl
         << tail << endl
         << tail->val << endl
         << (*tail).val << endl
         << tail->next << endl
         << (*tail).next << endl;

    return 0;
}