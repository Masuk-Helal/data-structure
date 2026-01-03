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

   long long min = head->val;
   long long max = head->val;
   Node *tmp = head;

   while (tmp != NULL)
   {
      if (tmp->val < min)
      {
         min = tmp->val;
      }
      else if (tmp->val > max)
      {
         max = tmp->val;
      }
      tmp = tmp->next;
   }
   cout << (max - min) << endl;
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

   print_linked_list(head);
   return 0;
}