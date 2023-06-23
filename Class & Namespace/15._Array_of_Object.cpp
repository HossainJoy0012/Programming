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