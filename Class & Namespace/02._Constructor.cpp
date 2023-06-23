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

     student(string nm, int clss, char sec, int rll, int mrks)
     {
          name = nm;
          cls = clss;
          section = sec;
          roll = rll;
          marks = mrks;
     }
};

int main()
{
     student a("Roger", 10, 'A', 1, 100);

     student b("Rayleigh", 10, 'A', 2, 99);

     student c("Luffy", 8, 'A', 1, 90);

     student d("Zoro", 8, 'A', 2, 89);

     cout << a.name << endl
          << a.cls << endl
          << a.section << endl
          << a.roll << endl
          << a.marks;

     cout << endl
          << endl;

     cout << b.name << endl
          << b.cls << endl
          << b.section << endl
          << b.roll << endl
          << b.marks;

     cout << endl
          << endl;

     cout << c.name << endl
          << c.cls << endl
          << c.section << endl
          << c.roll << endl
          << c.marks;

     cout << endl
          << endl;

     cout << d.name << endl
          << d.cls << endl
          << d.section << endl
          << d.roll << endl
          << d.marks;

     return 0;
}