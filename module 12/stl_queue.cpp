#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;
    q.push(10);
    if (!q.empty())
        q.pop();
    if (!q.empty())
        q.front();
    return 0;
}