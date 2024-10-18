// Author : Wasif Hossain <https://www.linkedin.com/in/wasif-h>
// Topic  : pattern
#include <bits/stdc++.h>
using namespace std;

class Teacher
{
    // access modifier
private:
    string wifename;

public:
    string name;
    string dept;
    string salary;

    // parameterized constructor
    Teacher(string n, string d, int s)
    {
        name = n;
        dept = d;
        salary = s;
    }

    void display(int date)
    {
        cout << name << endl;
        cout << dept << endl;
        cout << date << endl;
    }
};

// <<<---------  main function   --------->>>
int main()
{
    Teacher t1("Wasif", "cse", 25000);
    t1.display(2024);

    return 0;
}