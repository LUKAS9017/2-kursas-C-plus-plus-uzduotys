/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    /*//1 uzduotis
    for (int i = 6; i < 4; i++)
    {i -= 2;
    cout << i <<endl;}*/
    
    /*//2 uzduotis
    for (int i = 6; i < 9; i++)
    {i -= 2;
    cout << i <<endl;}*/
    
    //3 uzduotis
    for (int i = 6; i < 9; i += 3)
    {i -= 2;
    cout << i <<endl;}



    return 0;
}