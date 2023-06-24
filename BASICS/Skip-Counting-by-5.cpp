#include <iostream>

using namespace std;

int main()
{
    int input;

    cout << "Enter a number: ";
    cin >> input;

    int i;
    for (i = 0; i <= input; i += 5)
    {
        cout << i << " ";
    }

    cout << endl;
}
