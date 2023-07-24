#include <bits/stdc++.h>
using namespace std;

void max_heap_insert(vector<int> &v, int x)
{
    v.push_back(x);
    int cur_indx = v.size() - 1;

    while (cur_indx != 0)
    {
        int parent_indx = (cur_indx - 1) / 2;

        if (v[cur_indx] > v[parent_indx])
        {
            swap(v[cur_indx], v[parent_indx]);
            cur_indx = parent_indx;
        }
        else
            break;
    }
}

void max_heap_delete(vector<int> &v)
{
    int cur_indx = 0;
    int last_indx = v.size() - 1;

    v[cur_indx] = v[last_indx];
    v.pop_back();

    while (true)
    {
        int left_indx = (2 * cur_indx) + 1;
        int right_indx = (2 * cur_indx) + 2;

        if ((left_indx <= last_indx) && (right_indx <= last_indx))
        {
            if ((v[left_indx] >= v[right_indx]) && (v[cur_indx] < v[left_indx]))
            {
                swap(v[cur_indx], v[left_indx]);
                cur_indx = left_indx;
            }
            else if ((v[left_indx] <= v[right_indx]) && (v[cur_indx] < v[right_indx]))
            {
                swap(v[cur_indx], v[right_indx]);
                cur_indx = right_indx;
            }
            else
            {
                break;
            }
        }
        else if (left_indx <= last_indx)
        {
            if (v[cur_indx] < v[left_indx])
            {
                swap(v[cur_indx], v[left_indx]);
                cur_indx = left_indx;
            }
            else
            {
                break;
            }
        }
        else if (right_indx <= last_indx)
        {
            if (v[cur_indx] < v[right_indx])
            {
                swap(v[cur_indx], v[right_indx]);
                cur_indx = right_indx;
            }
            else
            {
                break;
            }
        }
        else
        {
            break;
        }
    }
}

int main()
{
    vector<int> v;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        max_heap_insert(v, x);
    }

    for (int val : v)
        cout << val << " ";

    cout << endl;
    max_heap_delete(v);

    for (int val : v)
        cout << val << " ";

    return 0;
}