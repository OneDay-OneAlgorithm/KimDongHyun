#include <iostream>
using namespace std;

int main()
{
    char arr[8][8];
    int count = 0;

    for (int i = 0; i <= 7; i++)
    {
        for (int j = 0; j <= 7; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 'F')
            {
                if (i % 2 == 0 && j % 2 == 0)
                    count++;
                else if (i % 2 == 1 && j % 2 == 1)
                    count++;
            }
        }
    }
    cout << count;
}
