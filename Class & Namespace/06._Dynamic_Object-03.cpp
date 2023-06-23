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

     student(string name, int cls, char section, int roll, int marks)
     {
          this->name = name;
          this->cls = cls;
          this->section = section;
          this->roll = roll;
          this->marks = marks;
     }
};

int main()
{
     student *a = new student("Roger", 10, 'A', 1, 100);
     student *b = new student("Rayleigh", 10, 'A', 2, 99);
     student *c = new student("Luffy", 8, 'A', 1, 90);
     student *d = new student("Zoro", 8, 'A', 2, 89);

     cout << (*a).name << endl
          << (*a).cls << endl
          << (*a).section << endl
          << (*a).roll << endl
          << (*a).marks;
     cout << endl;
     cout << a->name << endl
          << a->cls << endl
          << a->section << endl
          << a->roll << endl
          << a->marks;

     cout << endl
          << endl;

     cout << (*b).name << endl
          << (*b).cls << endl
          << (*b).section << endl
          << (*b).roll << endl
          << (*b).marks;
     cout << endl;
     cout << b->name << endl
          << b->cls << endl
          << b->section << endl
          << b->roll << endl
          << b->marks;

     cout << endl
          << endl;

     cout << (*c).name << endl
          << (*c).cls << endl
          << (*c).section << endl
          << (*c).roll << endl
          << (*c).marks;
     cout << endl;
     cout << c->name << endl
          << c->cls << endl
          << c->section << endl
          << c->roll << endl
          << c->marks;

     cout << endl
          << endl;

     cout << (*d).name << endl
          << (*d).cls << endl
          << (*d).section << endl
          << (*d).roll << endl
          << (*d).marks;
     cout << endl;
     cout << d->name << endl
          << d->cls << endl
          << d->section << endl
          << d->roll << endl
          << d->marks;

     return 0;
}