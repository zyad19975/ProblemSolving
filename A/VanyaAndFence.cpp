#include <iostream>
using namespace std;
int main()
{

    int n, h;
    int out = 0;
    cin >> n >> h;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x > h)
        {
            out += 2;
        }
        else
        {
            out++;
        }
    }
    cout << out << endl;
    return 0;
}