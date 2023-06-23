#include <iostream>

using namespace std;

int main()
{
    long n;

    cout << "Enter a number: ";
    cin >> n;

    if (n == 0)
        return 1;

    int count = 0;

    while (n != 0)
    {
        n /= 10;

        ++count;
    }

    cout << "Number of digits : " << count;
}
