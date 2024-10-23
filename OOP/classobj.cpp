// Author : Wasif Hossain <https://www.linkedin.com/in/wasif-h>
// Topic  : class and obj
#include <bits/stdc++.h>
using namespace std;
class Phone
{
public:
    string model;
    int ram;
    int rom;
    string color;

    void display(string date)
    {
        cout << "Date - " << date << endl;
        cout << "Model Name - " << model << endl;
        cout << "Ram - " << ram << endl;
        cout << "Rom - " << rom << endl;
        cout << "Color - " << color << endl;
    }
};

// <<<---------  main function   --------->>>
int main()
{

    cout << "---- Code with Wasif ----\n\n";

    // object 1
    Phone samsung;
    samsung.model = "Galaxy S24 Ultra";
    samsung.ram = 16;
    samsung.rom = 256;
    samsung.color = "Golden";
    samsung.display("22 Oct 2024");

    cout << endl
         << endl;
         
    // object 2
    Phone oneplus;
    oneplus.model = "Oneplus 9R 5g";
    oneplus.ram = 8;
    oneplus.rom = 128;
    oneplus.color = "White";
    oneplus.display("22 Oct 2024");

    return 0;
}