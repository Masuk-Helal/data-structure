#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
   int val;
   Node *next;
   Node *prev;
   Node(int val)
   {
      this->val = val;
      this->next = NULL;
      this->prev = NULL;
   }
};

void print_forowad(Node *head)
{
   Node *tmp = head;
   cout << "L -> ";
   while (tmp != NULL)
   {
      cout << tmp->val << " ";
      tmp = tmp->next;
   }
   cout << endl;
}

void print_backowad(Node *tail)
{

   Node *tmp = tail;
   cout << "R -> ";
   while (tmp != NULL)
   {
      cout << tmp->val << " ";
      tmp = tmp->prev;
   }
   cout << endl;
}

int get_node_size(Node *head)
{
   int count_Node = 0;
   while (head)
   {
      count_Node++;
      head = head->next;
   }
   return count_Node;
}

void inset_at_tail(Node *&head, Node *&tail, int idx, int val)
{
   int size = get_node_size(head);

   if (idx < 0 || idx > size)
   {
      cout << "Invalid" << endl;
      return;
   }

   Node *newNode = new Node(val);

   if (idx == 0)
   {
      if (head == NULL)
      {
         head = newNode;
         tail = newNode;
      }
      else
      {
         newNode->next = head;
         head->prev = newNode;
         head = newNode;
      }
   }
   else if (idx == size)
   {
      tail->next = newNode;
      newNode->prev = tail;
      tail = newNode;
   }
   else
   {
      Node *tmp = head;
      for (int i = 1; i < idx; i++)
      {
         tmp = tmp->next;
      }

      newNode->next = tmp->next;
      tmp->next->prev = newNode;
      tmp->next = newNode;
      newNode->prev = tmp;
   }

   print_forowad(head);
   print_backowad(tail);
}

int main()
{

   int Q;
   cin >> Q;
   Node *head = NULL;
   Node *tail = NULL;
   while (Q--)
   {
      int X, V;
      cin >> X >> V;

      inset_at_tail(head, tail, X, V);
   }
   return 0;
}