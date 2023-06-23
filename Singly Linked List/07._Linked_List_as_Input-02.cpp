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

void Insert_at_tail(Node *&head, Node *&tail, Node *&new_node)
{
    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
    }
    else
    {
        tail->next = new_node;
        tail = new_node;
    }
}

void print(Node *&head)
{
    Node *temp = head;

    cout << "Linked list : ";
    while (temp != NULL)
    {
        cout << temp->val << " ";

        temp = temp->next;
    }

    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        int value;
        cin >> value;

        if (value == -1)
        {
            print(head);
            break;
        }

        Node *new_node = new Node(value);

        Insert_at_tail(head, tail, new_node);
    }

    return 0;
}