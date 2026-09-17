#include <iostream>
using namespace std;

class Student
{
    string name;
    int roll;
    string branch;

public:
    void input()
    {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter roll number: ";
        cin >> roll;

        cout << "Enter branch: ";
        cin >> branch;
    }

    void show()
    {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll << endl;
        cout << "Branch: " << branch << endl;
    }
};

int main()
{
    Student s1, s2;

    cout << "Enter details of Student 1:" << endl;
    s1.input();

    cout << "\nEnter details of Student 2:" << endl;
    s2.input();

    cout << " Student 1 Details" << endl;
    s1.show();

    cout << " Student 2 Details" << endl;
    s2.show();

    return 0;
}
// 2nd programm
#include <iostream>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;
    float marks;

public:
    void input()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display()
    {
        cout << "\nStudent Record\n";
        cout << "Roll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{

    Student s1;

    s1.input();
    s1.display();

    return 0;
}

// 3rd programm
#include<iostream>
using namespace std;
class point{
    int x;
    int y;
    public:
    point(int a,int b):x{a},y{b}{
    };
    void show(){
        cout<<x<<endl<<y<<endl;
    }
};
int main(){
    point p1(2,3);
    point p2(4,5);
    p1.show();
    p2.show();
}
// 4th programm
#include <iostream>
using namespace std;

class Time
{
private:
    int hh, mm, ss;

public:
    void input(int h, int m, int s)
    {
        hh = h;
        mm = m;
        ss = s;
    }

    void show()
    {
        cout << hh << ":" << mm << ":" << ss << endl;
    }
};

int main()
{

    Time t1, t2;

    t1.input(10, 20, 30);
    t2.input(12, 45, 50);

    t1.show();
    t2.show();

    return 0;
}