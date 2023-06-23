#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    string name;
    int cls;
    char section;
    int roll;
    int marks;
};

bool cmp1(student x, student y)
{
    if (x.marks < y.marks)
        return true;
    else
        return false;
}

bool cmp2(student x, student y)
{
    if (x.marks > y.marks)
        return true;
    else
        return false;
}

int main()
{
    student a[4];

    for (int i = 0; i < 4; i++)
    {
        getline(cin, a[i].name);
        cin >> a[i].cls >> a[i].section >> a[i].roll >> a[i].marks;
        cin.ignore();
    }

    sort(a, a + 4, cmp1);
    for (int i = 0; i < 4; i++)
    {
        cout << a[i].name << endl
             << a[i].cls << endl
             << a[i].section << endl
             << a[i].roll << endl
             << a[i].marks << endl
             << endl;
    }

    sort(a, a + 4, cmp2);
    for (int i = 0; i < 4; i++)
    {
        cout << a[i].name << endl
             << a[i].cls << endl
             << a[i].section << endl
             << a[i].roll << endl
             << a[i].marks << endl
             << endl;
    }

    return 0;
}