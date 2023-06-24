#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *prev;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

void intro()
{
    cout << endl
         << "Option-01 :Insert at head" << endl
         << "Option-02 :Delete head" << endl
         << "Option-03 :Insert at tail" << endl
         << "Option-04 :Delete tail" << endl
         << "Option-05 :Insert at a position" << endl
         << "Option-06 :Delete from a position" << endl
         << "Option-07 :Print linked list" << endl
         << "Option-08 :Print reverse linked list" << endl
         << "Option-09 :Terminate" << endl
         << endl;

    cout << "Option : ";
}

void Insert_at_head(Node *&head, Node *&tail, int value)
{
    Node *new_node = new Node(value);

    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
    }
    else
    {
        new_node->next = head;
        head->prev = new_node;
        head = new_node;
    }
    cout << "Head inserted" << endl;
}

void Delete_head(Node *&head)
{
    if (head == NULL)
    {
        cout << "There is no node to delete";
        return;
    }
    else
    {
        Node *delete_head = head;
        head = head->next;
        head->prev = NULL;
        delete delete_head;

        cout << "Head deleted" << endl;
    }
}

void Insert_at_tail(Node *&head, Node *&tail, int value)
{
    Node *new_node = new Node(value);

    if (head == NULL)
    {
        Insert_at_head(head, tail, value);
    }
    else
    {
        tail->next = new_node;
        new_node->prev = tail;
        tail = new_node;

        cout << "Tail inserted" << endl;
    }
}

void Delete_tail(Node *&head, Node *&tail)
{
    if (head == NULL)
    {
        cout << "There is no node to delete";
        return;
    }
    else
    {
        Node *delete_tail = tail;
        tail = tail->prev;
        tail->next = NULL;
        delete delete_tail;

        cout << "Tail deleted" << endl;
    }
}

void Insert_at_position(Node *&head, Node *&tail, int value, int position)
{
    Node *new_node = new Node(value);

    if (position == 0)
    {
        Insert_at_head(head, tail, value);
    }

    else
    {
        Node *check = head;

        int count = -1;

        while (check != NULL)
        {
            count++;

            check = check->next;
        }

        if ((count + 1) == position)
        {
            Insert_at_tail(head, tail, value);
        }
        else if (count >= position && position > 0)
        {
            Node *temp = head;

            for (int i = 0; i < position - 1; i++)
            {
                temp = temp->next;
            }

            new_node->next = temp->next;
            temp->next->prev = new_node;

            new_node->prev = temp;
            temp->next = new_node;

            cout << "Node inserted" << endl;
        }
        else
        {
            cout << "Invalid position" << endl;
            return;
        }
    }
}

void Delete_from_position(Node *&head, Node *&tail, int position)
{
    if (position == 0)
    {
        Delete_head(head);
    }

    else
    {
        Node *check = head;

        int count = -1;

        while (check != NULL)
        {
            count++;

            check = check->next;
        }

        if (count == position)
        {
            Delete_tail(head, tail);
        }

        else if (count > position && position > 0)
        {
            Node *temp = head;

            for (int i = 0; i < position - 1; i++)
            {
                temp = temp->next;
            }

            Node *delete_node = temp->next;

            temp->next = temp->next->next;
            temp->next->prev = temp;

            delete delete_node;

            cout << "Node deleted" << endl;
        }

        else
        {
            cout << "Invalid position" << endl;
            return;
        }
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

void print_reverse(Node *&tail)
{
    Node *temp = tail;

    cout << "Linked list : ";
    while (temp != NULL)
    {
        cout << temp->val << " ";

        temp = temp->prev;
    }

    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        intro();
        int option;
        cin >> option;

        if (option < 0 && option > 9)
        {
            cout << "There are options only between 1 to 9";
            intro();
            int option;
            cin >> option;
        }

        else
        {
            if (option == 1)
            {
                cout << "Enter a value : ";
                int value;
                cin >> value;

                Insert_at_head(head, tail, value);
            }

            else if (option == 2)
            {
                Delete_head(head);
            }

            else if (option == 3)
            {
                cout << "Enter a value : ";
                int value;
                cin >> value;

                Insert_at_tail(head, tail, value);
            }

            else if (option == 4)
            {
                Delete_tail(head, tail);
            }

            else if (option == 5)
            {
                cout << "Enter a value : ";
                int value;
                cin >> value;

                cout << "Position of head : 0" << endl
                     << "Enter the position : ";
                int position;
                cin >> position;

                Insert_at_position(head, tail, value, position);
            }

            else if (option == 6)
            {
                cout << "Position of head : 0" << endl
                     << "Enter the position : ";
                int position;
                cin >> position;

                Delete_from_position(head, tail, position);
            }

            else if (option == 7)
            {
                print(head);
            }

            else if (option == 8)
            {
                print_reverse(tail);
            }

            else if (option == 9)
            {
                break;
            }
        }
    }

    return 0;
}
