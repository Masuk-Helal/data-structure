#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
   int val;
   Node* next;
   Node(int newval){
      this->val = newval;
      this->next = NULL;
   }
};

int main()
{
   Node a(10),b(2065),c(30);
   // a.val = 10;
   // b.val = 20;
   // c.val = 30;

   a.next = &b;
   cout << a.next->val << endl;
   return 0;
}