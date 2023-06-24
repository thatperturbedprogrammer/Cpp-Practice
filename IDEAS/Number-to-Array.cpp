#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    vector<int> n_A;

    cout << "Enter a number: ";

    cin >> n;

    int i;

    for(i = 0; i <= n; i++)
    {
        n_A.push_back(i);
    }

    cout << n_A[0];

    for(int j=1; j < n_A.size(); j++){

        cout << n_A.at(j) << ' ';
    }



}