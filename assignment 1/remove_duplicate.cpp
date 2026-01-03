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

void removeAllDuplicate(Node *&head)
{

   Node *deleteNode = head;

   while (deleteNode)
   {
      Node *current_val = deleteNode;
      Node *check_Node = deleteNode->next;


      while (check_Node)
      {
         if (deleteNode->val == check_Node->val)
         {
            current_val->next = check_Node->next;
            delete check_Node;
            check_Node = current_val->next;
         }
         else
         {
            current_val = check_Node;
            check_Node = check_Node->next;
         }
      }
      deleteNode = deleteNode->next;
   }
}

void print_linked_list(Node *head)
{
   Node *tmp = head;
   while (tmp != NULL)
   {
      cout << tmp->val << " ";
      tmp = tmp->next;
   }
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
   removeAllDuplicate(head);
   print_linked_list(head);
   return 0;
}