// Author : Wasif Hossain <https://www.linkedin.com/in/wasif-h>
// Topic  : oop
#include <bits/stdc++.h>
using namespace std;
class Laptop
{
public:
    string model;
    // string brand;
    // int ram;
    // int memory;
    // int core;

    Laptop(string model)
    {
        model = model;
        cout << model << endl;
    }

};

// <<<---------  main function   --------->>>
int main()
{

    cout << "---- Code with Wasif ----\n\n";
    Laptop asus("asus");

    return 0;
}