// Author : Wasif Hossain <https://www.linkedin.com/in/wasif-h>
// Topic  : deep copy constructor
#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int* rollptr;
    float cgpa;

    Student(string name, int roll, float cgpa)
    {
        this->name = name;
        rollptr = new int;
        *rollptr = roll;
        this->cgpa = cgpa;
    }
    // custom copy constructor. But this will be written by default
    Student(Student &obj)
    {
        this->name = obj.name;
        this->rollptr = obj.rollptr;
        this->cgpa = obj.cgpa;
    }

    void getinfo()
    {
        cout << name << " " << *rollptr << " " << cgpa << endl;
    }
};

// <<<---------  main function   --------->>>
int main()
{

    cout << "---- Code with Wasif ----\n\n";

    Student s1("Wasif", 12, 3.92);
    Student s2(s1); // by default it will make a deep copy
    s2.name = "Shihab";
    *(s2.rollptr) = 12;
    s1.getinfo();
    s2.getinfo();

    return 0;
}