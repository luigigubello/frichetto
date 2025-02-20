#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{

    int x;
    cout << "Type a number: ";
    try {
        cin >> x;
        if (x < 1)
        {
            throw 1;
        }

    }
    catch (int e) {
        cout << "Number needs to be bigger than 1";
        exit(0);
    }
    cout << "hello";
    // cout << "Your number is: " << x;
    // for (int i = 1; i <= x; i++) // User input defines number of lines
    int i = 1;
    while (i <= x)
    {
        if (i == 1 || i == x) // Print a line of x stars at the beginning and at the end
        {
            int j = 1;
            while (j <= x)
            {
                cout << "*";
                ++j;
            }
            /*for (int j = 1; j <= x; j++)
            {
                cout << "*";
            }*/

            cout << endl;
        }

        else // Print a star for every 1 and i and print a space for every other value
        { 
            int j = 1;
            while (j <= x)
            {
                if (j == 1 || j == x)
                {
                    cout << "*";
                }

                else
                {
                    cout << " ";
                }

                ++j;
            }

            /*for (int j = 1; j <= x; j++)
            {
                if (j == 1 || j == x)
                {
                    cout << "*";
                }

                else
                {
                    cout << " "; // E INVECE DIO CANE NO
                }

            } */

            cout << endl;
        }
    ++i;
    }
}