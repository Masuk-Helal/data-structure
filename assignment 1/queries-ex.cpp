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

void inser_at_head(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    newnode->next = head;
    head = newnode;

    if (tail == NULL)
        tail = head;
}

void inser_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);

    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }

    tail->next = newnode;
    tail = newnode;
}

void deleteFromAny(Node *&head, Node *&tail, int idx)
{
    if (head == NULL)
    {
        return;
    }

    if (idx == 0)
    {
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
        return;
    }

    Node *tmp = head;
    for (int i = 1; i < idx; i++)
    {
        if (tmp->next == NULL)
        {
            return;
        }
        tmp = tmp->next;
    }

    if (tmp->next == NULL)
    {
        return;
    }
    Node *deleteNode = tmp->next;
    tmp->next = deleteNode->next;
    if (deleteNode == tail)
    {
        tail = tmp;
    }
    delete deleteNode;
}

void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;

    Node *head = NULL;
    Node *tail = NULL;

    while (n--)
    {
        int con, val;
        cin >> con >> val;

        if (con == 0)
        {
            inser_at_head(head, tail, val);
        }
        else if (con == 1)
        {
            inser_at_tail(head, tail, val);
        }
        else if (con == 2)
        {
            deleteFromAny(head, tail, val);
        }

        print_linked_list(head);
    }

    return 0;
}
