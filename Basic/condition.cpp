/* Author    : wasif71 - wasif.hx@gmail.com
Problem Name : conditional
*/
#include <bits/stdc++.h>
using namespace std;

//-------------------- main function  ----------- Start ---
int main()
{

    char letter;
    cout << "Enter a Character : ";
    cin >> letter;

    if ((letter >= 'a') && (letter <= 'z'))
    {
        cout << "Small Letter";
        
    }
    else if ((letter >= 'A') && (letter <= 'Z'))
    {
        cout << "Capital Letter";
    }
    else
    {
        cout << "Invalid Input";
    }

    return 0;
}
//------------------------------------------------- End ---