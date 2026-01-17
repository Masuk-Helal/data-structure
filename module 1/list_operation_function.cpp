#include <bits/stdc++.h>
using namespace std;
int main()
{

   list<int> l = {20, 30, 10, 50, 30, 10, 60};
   //   l.remove(10);
   // l.sort(greater<int>());
   // l.unique();
   l.reverse();
   for (int val : l)
   {
      cout << val << endl;
   }

   return 0;
}