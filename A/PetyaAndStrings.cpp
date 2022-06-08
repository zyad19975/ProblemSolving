#include <bits/stdc++.h>
using namespace std;

int main()
{
    string first, second;
    cin >> first >> second;

    transform(first.begin(), first.end(), first.begin(), ::tolower);
    transform(second.begin(), second.end(), second.begin(), ::tolower);

    int f = 0;
    for (int i = 0; i < first.length(); i++)
    {
        if (first[i] != second[i])
        {
            // cout << first[i] << " ------- " << second[i] << endl;
            if (((int)first[i]) < ((int)second[i]))
            {
                f = -1;
            }
            else
            {
                f = 1;
            }
            break;
        }
    }
    cout << f;
}