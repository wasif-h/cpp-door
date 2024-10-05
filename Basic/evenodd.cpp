/*
Author    : Wasif Hossain 
github --> wasif-h, cf --> wasif71 
Contact --> wasif.hx@gmail.com
Problem Name : even odd
*/
#include <bits/stdc++.h>
using namespace std;

//-------------------- main function  ----------- Start ---
int main()
{

    for (int i = -3; i <= 20; i++)
    {

        if (i > 0)
        {
            if (i % 2 == 0)
            {

                cout << i << "   Even" << endl;
            }
            else
            {
                cout << i << "   Odd" << endl;
            }
        }
        else if (i == 0)
        {
            cout << i << "   Zero" << endl;
        }
        else
        {
            cout << i << "   Negative number" << endl;
        }
    }

    return 0;
}
//------------------------------------------------- End ---