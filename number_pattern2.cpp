#include <iostream>
using namespace std;
int main()
{
    int i, j;
    for (i = 5; i > 0; i--)
    {
        for (j = 5; j >= i; j--)
        {
            cout << (j + 1) - i;
        }
        cout << "\n";
    }
    return 0;
}