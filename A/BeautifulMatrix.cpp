#include <iostream>
using namespace std;

int main()
{
    int row, column;

    for (int r = 0; r < 5; r++)
    {
        for (int c = 0; c < 5; c++)
        {
            int index;
            cin >> index;
            if (index)
            {
                row = r + 1;
                column = c + 1;
                break;
            }
        }
    }

    // cout << row << " ------- " << column << endl;
    int steps = 0;
    while (row != 3)
    {
        steps++;
        if (row > 3)
        {
            row--;
        }
        else if (row < 3)
        {
            row++;
        }
    }
    while (column != 3)
    {
        steps++;
        if (column > 3)
        {
            column--;
        }
        else if (column < 3)
        {
            column++;
        }
    }
    cout << steps;
}