#include <bits/stdc++.h>
using namespace std;
int main()
{

   vector<int> v; // vector dicler type 1
   vector<int> v(5); // vector dicler type 2
   vector<int> v(5, -1); // vector dicler type 3
   for (int i = 0; i < v.size(); i++)
   {
      cout << v[i] << " ";
   }

   vector<int> v(5, 1);
   vector<int> v2(v); // vector dicler type 4
   for (int i = 0; i < v2.size(); i++)
   {
      cout << v2[i] << " ";
   }

   int a[5] = {1, 2, 4, 5, 6};
   vector<int> v(a, a + 5); // vector dicler type 5
   for (int i = 0; i < v.size(); i++)
   {
      cout << v[i] << " ";
   }

   vector<int> v = {1, 2, 4, 5}; // vector dicler type 5
   for (int i = 0; i < v.size(); i++)
   {
      cout << v[i] << " ";
   }

   return 0;
}