// Author : Wasif Hossain <https://www.linkedin.com/in/wasif-h>
// Topic  : Pointer
#include <bits/stdc++.h>
using namespace std;

// <<<---------  main function   --------->>>
int main()
{

    cout << "---- Code with Wasif ----\n\n";

    int a = 15;
    cout << "1. Value of a = " << a << endl;
    // to show the memory address of a varibale we use & before variable name
    cout << "2. Address of a = " << &a << endl;

    // pointer variable - to store the mem address of a varibale we use a  special variable called pointer variable

    int* ptra = &a;
    cout << "3. value of ptra = " << ptra << endl;

    // pointer to pointer - to store the address of pointer variable into another pointer variable
    // int* is the data type of ptra and int** indicate this as a pointer variable of ptra which is partent pointer variable

    int** parptra = &ptra;

    cout << "4. address of ptra = " << &ptra << endl;
    cout << "5. Value of parptra = " << parptra << endl;

    // dereferencing operator * is used to know the value of a address/pointer variable. If we use pointer to pointer varibale we have to use ** for poping up the value of a from the root.

    int val_of_ptra = *(ptra);
    cout << "6. Value of ptra = " << val_of_ptra << endl;
    int val_of_parptra = **(parptra);
    cout << "7. Value of parptra = " << val_of_parptra << endl;
    

    return 0;
}