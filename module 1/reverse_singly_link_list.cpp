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

void print_linked_list(Node *head)
{
   Node *tmp = head;
   while (tmp != NULL)
   {
      cout << tmp->val << endl;
      tmp = tmp->next;
   }
}

void reverse_linked_list(Node* &head, Node* &tail, Node* temp)
{
   if (temp->next == NULL)
   {
      head = temp;
      return;
   }
   reverse_linked_list(head,tail, temp->next);
   temp->next->next = temp;
   temp->next = NULL;
   tail = temp;
}

int main()
{
   Node *head = NULL;
   Node *tail = NULL;

   int val;
   while (true)
   {
      cin >> val;
      if (val == -1)
      {
         break;
      }
      inser_at_tail(head, tail, val);
   }
   reverse_linked_list(head,tail,head);
   print_linked_list(head);
   return 0;
}