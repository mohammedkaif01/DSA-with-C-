#include <iostream>
using namespace std;

int main()
{
    // Hollow Diamond Pattern
    int n = 4;
    //top
    for (int i = 0; i < n; i++)
    { //space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << "*";
        if (i != 0)
        { //space
            for (int j = 0; j < 2 * i - 1; j++)
            {
                cout << " ";
            }
            cout << "*";
        }

        cout << endl;
    }

    return 0;
} // namespace std;
