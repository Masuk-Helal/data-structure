#include <bits/stdc++.h>
using namespace std;



int main()
{

   vector<int> v = {10,20,30};

   list<int> l2(v.begin(),v.end());
   cout << l2.size() << endl;

   l2.resize(2);

   for(int val :l2){
      cout << val << endl;
   }
 
   return 0;
}