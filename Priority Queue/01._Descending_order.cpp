#include <bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int> pq;

    while (true)
    {
        int x;
        cin >> x;

        if (x == -1)
            break;

        pq.push(x);
    }

    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }

    return 0;
}