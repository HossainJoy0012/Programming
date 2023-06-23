#include <bits/stdc++.h>
using namespace std;

class CustomSort
{
public:
    char character;
    int count;
};

bool cmp1(CustomSort x, CustomSort y)
{
    if (x.count < y.count)
        return true;
    else
        return false;
}

bool cmp2(CustomSort x, CustomSort y)
{
    if (x.count > y.count)
        return true;
    else
        return false;
}

int main()
{
    CustomSort alpha[26];
    for (int i = 0; i < 26; i++)
    {
        alpha[i].character = i + 'a';
        alpha[i].count = 0;
    }

    for (int i = 0; i < 26; i++)
    {
        cout << alpha[i].character << " " << alpha[i].count << endl;
    }

    while (!cin.eof())
    {
        char c;
        cin >> c;

        alpha[c - 'a'].count++;
    }

    sort(alpha, alpha + 26, cmp1);
    for (int i = 0; i < 26; i++)
    {
        if (alpha[i].count > 0)
            cout << alpha[i].character << " " << alpha[i].count << endl;
    }

    sort(alpha, alpha + 26, cmp2);
    for (int i = 0; i < 26; i++)
    {
        if (alpha[i].count > 0)
            cout << alpha[i].character << " " << alpha[i].count << endl;
    }

    return 0;
}