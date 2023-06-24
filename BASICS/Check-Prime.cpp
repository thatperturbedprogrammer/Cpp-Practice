#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    long n;

    cin >> n; // maan ke chal rhe hai ki Prime number hai.

    bool flag = true;

    for (long i = 2; i <= sqrt(n); i++)
    {
        if( n % i == 0)
        {
            flag = false; // Prime number nahi hai. Kyuki = 0 matlab Divisible , Factor mil gye other than 1 & n (itself).
            break;
        }

    }

    if(flag) 
    {
        cout << "Prime";
    }

    else
    {
        cout << "Not Prime";
    }

}