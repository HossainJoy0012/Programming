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
         << "Option-08 :Terminate" << endl
         << endl;

    cout << "Option : ";
}

void Insert_at_head(Node *&head, int value)
{
    Node *new_node = new Node(value);

    if (head == NULL)
    {
        head = new_node;
    }
    else
    {
        new_node->next = head;
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
        delete delete_head;

        cout << "Head deleted" << endl;
    }
}

void Insert_at_tail(Node *&head, int value)
{
    Node *new_node = new Node(value);

    if (head == NULL)
    {
        Insert_at_head(head, value);
    }
    else
    {
        Node *temp = head;

        while ((temp->next) != NULL)
        {
            temp = temp->next;
        }

        temp->next = new_node;

        cout << "Tail inserted" << endl;
    }
}

void Delete_tail(Node *&head)
{
    if (head == NULL)
    {
        cout << "There is no node to delete";
        return;
    }
    else
    {
        Node *temp = head;

        while ((temp->next->next) != NULL)
        {
            temp = temp->next;
        }
        Node *delete_tail = temp->next->next;
        temp->next = NULL;
        delete delete_tail;

        cout << "Tail deleted" << endl;
    }
}

void Insert_at_position(Node *&head, int value, int position)
{
    Node *new_node = new Node(value);

    if (position == 1)
    {
        Insert_at_head(head, value);
    }

    else
    {
        Node *check = head;

        int count = 0;

        while (check != NULL)
        {
            count++;

            check = check->next;
        }

        if ((count + 1) == position)
        {
            Insert_at_tail(head, value);
        }
        else if (count > position && position > 0)
        {
            Node *temp = head;

            for (int i = 1; i < position - 1; i++)
            {
                temp = temp->next;
            }

            new_node->next = temp->next;
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

void Delete_from_position(Node *&head, int position)
{
    if (position == 1)
    {
        Delete_head(head);
    }

    else
    {
        Node *check = head;

        int count = 0;

        while (check != NULL)
        {
            count++;

            check = check->next;
        }

        if (count == position)
        {
            Delete_tail(head);
        }

        else if (count > position && position > 0)
        {
            Node *temp = head;

            for (int i = 1; i < position - 1; i++)
            {
                temp = temp->next;
            }

            Node *delete_node = temp->next;
            temp->next = temp->next->next;
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

int main()
{
    Node *head = NULL;

    while (true)
    {
        intro();
        int option;
        cin >> option;

        if (option < 0 && option > 8)
        {
            cout << "There are options only between 1 to 8";
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

                Insert_at_head(head, value);
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

                Insert_at_tail(head, value);
            }

            else if (option == 4)
            {
                Delete_tail(head);
            }

            else if (option == 5)
            {
                cout << "Enter a value : ";
                int value;
                cin >> value;

                cout << "Position of head : 1" << endl
                     << "Enter the position : ";
                int position;
                cin >> position;

                Insert_at_position(head, value, position);
            }

            else if (option == 6)
            {
                cout << "Position of head : 1" << endl
                     << "Enter the position : ";
                int position;
                cin >> position;

                Delete_from_position(head, position);
            }

            else if (option == 7)
            {
                print(head);
            }

            else if (option == 8)
            {
                break;
            }
        }
    }

    return 0;
}