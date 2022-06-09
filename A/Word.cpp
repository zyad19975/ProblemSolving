#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int upper = 0;
    int lower = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if (isupper(str[i]))
        {
            upper++;
        }
        else
        {
            lower++;
        }
    }
    if (lower < upper)
    {
        for (int x = 0; x < str.length(); x++)
            str[x] = toupper(str[x]);
    }
    else
    {
        for (int x = 0; x < str.length(); x++)
            str[x] = tolower(str[x]);
    }
    cout << str;
}