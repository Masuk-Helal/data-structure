#include <bits/stdc++.h>
using namespace std;
int main()
{

   // int n;
   // cin >> n;
   // cin.ignore();
   // vector<string> v(n);

   vector<int> v = {1, 2, 3, 4, 5};
   v.erase(v.begin() + 2, v.end());

   for (int i = 0; i < v.size(); i++)
   {
      cout << v[i] << " ";
   }

   // for (int i = 0; i < n; i++)
   // {

   //    getline(cin, v[i]);
   // }

   return 0;
}