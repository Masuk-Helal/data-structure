#include <bits/stdc++.h>
using namespace std;

int main()
{
   stack<int> st;
   queue<int> qu;
   int s, q;
   cin >> s >> q;

   if (s != q)
   {
      cout << "NO";
      return 0;
   }

   for (int i = 0; i < s; i++)
   {
      int val;
      cin >> val;
      st.push(val);
   }

   for (int i = 0; i < q; i++)
   {
      int val;
      cin >> val;
      qu.push(val);
   }

   while (st.empty() == false && qu.empty() == false)
   {
      if (st.top() != qu.front())
      {
         cout << "NO";
         return 0;
      }
      st.pop();
      qu.pop();
   }
   cout << "YES";
   return 0;

   
}