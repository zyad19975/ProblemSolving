#include <iostream>
using namespace std;

int main()
{
    int Limak, Bob;
    cin >> Limak >> Bob;

    int years = 0;
    while (Limak <= Bob)
    {
        years++;
        Limak = Limak * 3;
        Bob = Bob * 2;
    }
    cout << years;
}