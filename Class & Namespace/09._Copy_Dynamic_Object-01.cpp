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

    void info()
    {
        cout << name << endl
             << cls << endl
             << section << endl
             << marks << endl
             << endl;
    }
};

int main()
{
    student *a = new student("Roger", 10, 'A', 1, 100);
    student *b = new student("Rayleigh", 10, 'A', 2, 99);
    student *c = new student("Luffy", 8, 'A', 1, 90);
    student *d = new student("Zoro", 8, 'A', 2, 89);

    a->info();
    b->info();
    c->info();
    d->info();

    b = d;

    a->info();
    b->info();
    c->info();
    d->info();

    delete d;

    a->info();
    b->info();
    c->info();
    d->info();

    return 0;
}