// Author : Wasif Hossain <https://www.linkedin.com/in/wasif-h>
// Topic  : Pointer Basic
#include <bits/stdc++.h>
using namespace std;

// <<<---------  main function   --------->>>
int main()
{

    cout << "---- Code with Wasif ----\n\n";
    // In this code - a means normal variable, ptr is a pointer variable, parptr is a parent pointer variable

    int a = 15;
    cout << "1. Value of a = " << a << endl;
    // to show the memory address of a varibale we use & before variable name
    cout << "2. Address of a = " << &a << endl;

    // pointer variable - to store the mem address of a varibale we use a  special variable called pointer variable

    int *ptr = &a;
    cout << "3. value of ptr = " << ptr << endl;

    // pointer to pointer - to store the address of pointer variable into another pointer variable
    // int* is the data type of ptr and int** indicate this as a pointer variable of ptr which is partent pointer variable

    int **parptr = &ptr;

    cout << "4. address of ptr = " << &ptr << endl;
    cout << "5. Value of parptr = " << parptr << endl;

    // dereferencing operator * is used to know the value of a address/pointer variable. If we use pointer to pointer varibale we have to use ** for poping up the value of a from the root.

    int val_of_ptr = *(ptr);
    cout << "6. Value of ptr = " << val_of_ptr << endl;
    int val_of_parptr = **(parptr);
    cout << "7. Value of parptr = " << val_of_parptr << endl;

    return 0;
}