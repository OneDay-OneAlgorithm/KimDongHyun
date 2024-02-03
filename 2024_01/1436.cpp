#include <iostream>
using namespace std;

int main()
{
    int start = 666, count = 0, temp;
    int N;

    cin >> N;

    while (true)
    {
        temp = start;

        while (temp > 0)
        {
            if (temp % 1000 == 666)
            {
                count++;
                break;
            }
            temp = temp / 10;
        }
        if (count == N)
        {
            cout << start << '\n';
            break;
        }
        start++;
    }
    return 0;
}
