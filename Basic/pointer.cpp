// Author : Wasif Hossain <https://www.linkedin.com/in/wasif-h>
// Topic  : Pointer
#include <bits/stdc++.h>
using namespace std;

// Pass by Value
void change_a_func1(int a)
{

    a = 10;
}

// Pass by reference using alias
void change_a_func2(int &a)
{
    a = 20;
}

// Pass by reference using pointer

void change_a_func3(int *a)
{
    *a = 30;
}

// <<<---------  main function   --------->>>
int main()
{

    cout << "---- Code with Wasif ----\n\n";

    int a = 15;
    cout << "1. Value of a = " << a << endl;
    // to show the memory address of a varibale we use & before variable name
    cout << "2. Address of a = " << &a << endl;

    // pointer variable - to store the mem address of a varibale we use a  special variable called pointer variable

    int *ptra = &a;
    cout << "3. value of ptra = " << ptra << endl;

    // pointer to pointer - to store the address of pointer variable into another pointer variable
    // int* is the data type of ptra and int** indicate this as a pointer variable of ptra which is partent pointer variable

    int **parptra = &ptra;

    cout << "4. address of ptra = " << &ptra << endl;
    cout << "5. Value of parptra = " << parptra << endl;

    // dereferencing operator * is used to know the value of a address/pointer variable. If we use pointer to pointer varibale we have to use ** for poping up the value of a from the root.

    int val_of_ptra = *(ptra);
    cout << "6. Value of ptra = " << val_of_ptra << endl;
    int val_of_parptra = **(parptra);
    cout << "7. Value of parptra = " << val_of_parptra << endl;

    // Here is function part ---------------
    cout << "------------ Function Part --------------" << endl;

    a = 7;
    cout << a << endl;

    change_a_func1(a);
    cout << a << endl;

    change_a_func2(a);
    cout << a << endl;

    change_a_func3(&a);
    cout << a << endl;

    return 0;
}