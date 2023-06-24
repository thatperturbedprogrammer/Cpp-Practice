#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;

    cout << "Enter a Binary Number: " << "\n";
    cin >> str;

    double num = 0;

    int n1 = str.length();
    int n2 = 0;

    while(n1--)
    {
        if(str[n1] == '1')
            num += pow(2, n2);
        
        n2++;

    }

    cout << num;

}