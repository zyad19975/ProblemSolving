#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int solvedProbelms = 0;
    for (int i = 0; i < n; i++)
    {
        int x, y, z;
        cin >> x >> y >> z;
        int sum = x + y + z;
        if (sum >= 2)
        {
            solvedProbelms++;
        }
    }
    cout << solvedProbelms;
}