#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int *arrBoxes = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arrBoxes[i];
    }
    sort(arrBoxes, arrBoxes + n);
    for (int i = 0; i < n; i++)
    {
        cout << arrBoxes[i] << " ";
    }
}