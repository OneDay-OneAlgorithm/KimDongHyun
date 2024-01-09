#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b, count = 0;

    cin >> a;
    b = a;

    while (true)
    {
        b = (b % 10) * 10 + ((b / 10) + (b % 10)) % 10;
        count++;

        if (b == a)
        {
            break;
        }
    }

    cout << count << endl;
    return 0;
}
