#include <iostream>

using namespace std;

int main()
{
    char ch = '0';
    long a, b;

    while( (ch != 'X') || (ch != 'x') ) 
    {
        cout << "Enter 2 Numbers: " << "\n";
        cin >> a;
        cout << "\n";
        cin >> b;
        cout << "\n";

        cout << "Enter Operation to perform (+, -, /, %, *) or x to break: " << "\n";
        cin >> ch;
        
        if(ch == 'X' || ch == 'x')
            break;
        
        if(ch == '+')
        {

            cout << a << "+" << b << "=" << a + b << "\n\n";
        }

        else if(ch == '-')
        {
 
             cout << a << "-" << b << "=" << a - b << "\n\n";
        }

        else if(ch == '/')
        {

             cout << a << "/" << b << "=" << a / b << "\n\n";
        }

        else if(ch == '%') 
        {

             cout << a << "%" << b << "=" << a % b << "\n\n";
        }

        else if(ch == '*')
        {

             cout << a << "*" << b << "=" << a * b << "\n\n";
        }

        else
            cout << "INVALID OPERATION! Try Again.\n\n";
  
    }

}