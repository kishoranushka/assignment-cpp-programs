#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 5; j >= i; j--)
        {
            if (i == j)
            {
                cout << j;
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}