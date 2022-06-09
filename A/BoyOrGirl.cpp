#include <bits/stdc++.h>
using namespace std;

int longestUniqueSubsttr(string str)
{
    int n = str.size();
    int res = 0; // result
    vector<bool> visited(256);
    for (int i = 0; i < n; i++)
    {
        visited[str[i]] = true;
    }
    for (int i = 0; i < 256; i++)
    {
        if (visited[i])
        {
            res++;
        }
    }
    return res;
}

// Driver code
int main()
{
    string str;
    cin >> str;
    int len = longestUniqueSubsttr(str);
    // cout << len << endl;
    if (len % 2)
    {
        cout << "IGNORE HIM!";
    }
    else
    {
        cout << "CHAT WITH HER!";
    }
    return 0;
}
