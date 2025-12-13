#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;
int main()
{

  int n; //o(1)
   cin >> n; //o(1)


   for (int i = 1; i < n; i+=2)//o(n)
   {
      cout << i << " ";
   }

   cout << endl;

   for (int i = 1; i <=n; i++)//o(n) 
   {
      cout << i << " ";
   }

   return 0; //o(1)
}