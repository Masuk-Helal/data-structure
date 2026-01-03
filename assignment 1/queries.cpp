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

void inser_at_head(Node *&head, int val)
{

   Node *newnode = new Node(val);
   newnode->next = head;
   head = newnode;
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

void deleteFromAny(Node *&head)
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
   cout << endl;
}

int main()
{
   int n;
   cin >> n;

   Node *head = NULL;
   Node *tail = NULL;

   for (int i = 1; i <= n; i++)
   {
      int con, val;
      cin >> con >> val;
      // cout << con << " " << val << endl;
      if (con == 1)
      {
         inser_at_tail(head, tail, val);
      }
      //  if (con == 0)
      // {
      //    inser_at_head(head, val);
      // }
      print_linked_list(head);
   }

   return 0;
}