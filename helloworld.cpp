#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{

    int x;
    cout << "Type a number: ";
    cin >> x;
    // cout << "Your number is: " << x;
    for (int i = 1; i <= x; i++) // User input defines number of lines
    {
        if (i == 1 || i == x) // Print a line of x stars at the beginning and at the end
        { 
            for (int j = 1; j <= x; j++)
            {
                cout << "*";
            }

            cout << endl;
        }

        else // Print a star for every 1 and i and print a space for every other value
        { 
            for (int j = 1; j <= x; j++)
            {
                if (j == 1 || j == x)
                {
                    cout << "*";
                }

                else
                {
                    cout << " "; // E INVECE DIO CANE NO
                }

            }

            cout << endl;
        }
    }
}