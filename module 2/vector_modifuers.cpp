#include <bits/stdc++.h>
using namespace std;
int main()
{

   vector<int> v = {1, 2, 3, 4, 5};
   vector<int> v2;
   v2 = v;
   // for(int i =0; i<v2.size();i++){
   //    cout << v2[i] << " ";
   // }
   vector<int> v3 = {100, 455, 76, 24};
   v2.insert(v2.begin() + 2, v3.begin(), v3.end());

   v3.erase(v3.begin()+1,v3.begin()+3);

   vector<int> v4 = {100, 455, 100, 76, 100, 24,100,};
   replace(v4.begin(), v4.end(), 100,55);
   for (int x : v4)
   {
      cout << x << " ";
   }

   vector<int> v5 = {100, 455, 100, 76, 100, 24,100,};

   auto it = find(v5.begin(),v.end(),100);

   if(it == v4.end()){
      cout << "Not Found";
   } else {
      cout << "Found";
   }
   return 0;
}