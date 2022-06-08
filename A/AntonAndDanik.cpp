#include <iostream>
#include <string>
using namespace std;
int main()
{
    string input;
    int n;
    int Anton = 0;
    int Danik = 0;
    cin >> n >> input;

    for (int i = 0; i < n; i++)
    {
        if (input[i] == 'A')
        {
            Anton++;
        }
        else
        {
            Danik++;
        }
    }

    if (Anton > Danik)
    {
        cout << "Anton";
    }
    else if (Danik > Anton)
    {
        cout << "Danik";
    }
    else
    {
        cout << "Friendship";
    }
}