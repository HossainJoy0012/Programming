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

int main()
{
    student a[4];

    for (int i = 0; i < 4; i++)
    {
        getline(cin, a[i].name);
        cin >> a[i].cls >> a[i].section >> a[i].roll >> a[i].marks;
        cin.ignore();
    }

    student mx = a[0], mn = a[0];

    for (int i = 1; i < 4; i++)
    {
        if (a[i].marks > mx.marks)
            mx = a[i];
        if (a[i].marks < mn.marks)
            mn = a[i];
    }

    cout << "The student with maximum marks :" << endl
         << mx.name << endl
         << "The student with minimum marks :" << endl
         << mn.name << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            if (a[i].marks > a[j].marks)
                swap(a[i], a[j]);
        }
    }

    cout << "Ascending order :" << endl;
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