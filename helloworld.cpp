#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    /*
    vector<string> msg{ "Hello", "C++", "World", "from", "VS Code", "and the C++ extension!" };

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
    */

    int x;
    cout << "Type a number: ";
    cin >> x;
    // cout << "Your number is: " << x;
    for (int i = 1; i <= x; i++) // User input defines number of lines
    {
        for (int j = 1; j <= i; j++) // We print a number of asterisks equal to the value of i
        {
            cout << "*";
        }
        cout << "\n";
    }
    cout << endl;
}