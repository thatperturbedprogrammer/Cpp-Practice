#include <iostream>

using namespace std;

int main()
{
    int a, b;
    char op = 0;
   
    while(op != 'x' || op != 'X'){

        cout << "Enter Operation (+, -, /, %, *) or x to stop: ";
    
        cin >> op;

        if(op == 'x' || op == 'X'){
            cout << "STOP";
            break;
        }

        cout << "Enter Two Numbers: ";

        cin >> a >> b;

        if(op == '+'){
            cout << a + b << "\n";
        }

        else if(op == '-'){
            cout << a - b << "\n";
        }

        else if(op == '/'){
            cout << a / b << "\n";
        }

        else if(op == '%'){
            cout << a % b << "\n";
        }

        else if(op == '*'){
            cout << a * b << "\n";
        }
            
    }


}

