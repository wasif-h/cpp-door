// Author : Wasif Hossain <https://www.linkedin.com/in/wasif-h>
// Topic  : pointer and functioin
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
    int a = 5;
    cout << a << endl;

    change_a_func1(a);
    cout << a << endl;

    change_a_func2(a);
    cout << a << endl;

    change_a_func3(&a);
    cout << a << endl;

    return 0;
}