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
     student a;
     a.name = "Roger";
     a.cls = 10;
     a.section = 'A';
     a.roll = 1;
     a.marks = 100;

     student b;
     b.name = "Rayleigh";
     b.cls = 10;
     b.section = 'A';
     b.roll = 2;
     b.marks = 99;

     student c;
     c.name = "Luffy";
     c.cls = 8;
     c.section = 'A';
     c.roll = 1;
     c.marks = 90;

     student d;
     d.name = "Zoro";
     d.cls = 8;
     d.section = 'A';
     d.roll = 2;
     d.marks = 89;

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